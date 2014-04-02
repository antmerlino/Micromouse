#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <inc/hw_memmap.h>
#include <driverlib/gpio.h>
#include <driverlib/pin_map.h>
#include <driverlib/adc.h>
#include <driverlib/sysctl.h>
#include <inc/hw_ints.h>

#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/BIOS.h>

#include "system.h"
#include "ir_sensor.h"
#include "drivers/bluetooth.h"
#include "drivers/motor.h"

#include <ti/drivers/GPIO.h>

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>

#define MAX_IR_DUTY 10

#define AVG_DATA (adc_data[0] + adc_data[1])/2

ti_sysbios_family_arm_m3_Hwi_Struct adc0ss1_hwi;
ti_sysbios_family_arm_m3_Hwi_Struct adc0ss2_hwi;

Hwi_Params adc0ss1_params;
Hwi_Params adc0ss2_params;

char spf_buf[80];
bool stream_buf = false;
uint8_t ir_duty = 1;

int16_t rb_offset = 0;
int16_t rf_offset = 0;
int16_t lf_offset = 0;
int16_t lb_offset = 0;

void side_poll(side_ir_data_t * side_ir_data){

		// Turn on the LEDs
		GPIO_write(IR_SIDE_1, ON);

		// Sleep so the LED can turn on
		Task_sleep(ir_duty);

		// Trigger ADC0 SS1
		ADCProcessorTrigger(ADC0_BASE, 1);

		// Wait until the sample sequence has completed.
		while(!ADCIntStatus(ADC0_BASE, 1, false))
		{
		}

		ADCIntClear(ADC0_BASE, 1);

		// Turn off the IR LED
		GPIO_write(IR_SIDE_1, OFF);

		// Read ADC Value
		ADCSequenceDataGet(ADC0_BASE, 1, &(side_ir_data->left_front));

		// Turn on the LEDs
		GPIO_write(IR_SIDE_2, ON);

		// Sleep so the LED can turn on
		Task_sleep(ir_duty);

		// Trigger ADC0 SS1
		ADCProcessorTrigger(ADC0_BASE, 2);

		// Wait until the sample sequence has completed.
		while(!ADCIntStatus(ADC0_BASE, 2, false))
		{
		}

		ADCIntClear(ADC0_BASE, 2);

		// Turn off the IR LED
		GPIO_write(IR_SIDE_2, OFF);

		// Read ADC Value
		ADCSequenceDataGet(ADC0_BASE, 2, &(side_ir_data->right_front));

		// Adjust the value for setpoints
		side_ir_data->left_back += LB_OFFSET;
		side_ir_data->right_back += RB_OFFSET;
		side_ir_data->left_front += LF_OFFSET;
		side_ir_data->right_front += RF_OFFSET;

		if(stream_buf){
			int len = sprintf(spf_buf, "LF: %i, RF: %i, LB: %i, RB: %i\r\n", side_ir_data->left_front, side_ir_data->right_front, side_ir_data->left_back, side_ir_data->right_back);
			bluetooth_transmit(spf_buf, len);
		}
}

void front_poll(uint32_t * buf){

	// Turn on the LEDs
		GPIO_write(IR_FRONT_LEFT, ON);
		GPIO_write(IR_FRONT_RIGHT, ON);

		// Sleep so the LED can turn on
		Task_sleep(ir_duty);

		// Trigger ADC0 SS1
		ADCProcessorTrigger(ADC1_BASE, 1);

		// Wait until the sample sequence has completed.
		while(!ADCIntStatus(ADC1_BASE, 1, false))
		{
		}

		ADCIntClear(ADC1_BASE, 1);

		// Turn off the IR LED
		GPIO_write(IR_FRONT_LEFT, OFF);
		GPIO_write(IR_FRONT_RIGHT, OFF);

		// Read ADC Value
		ADCSequenceDataGet(ADC1_BASE, 1, buf);

}

void check_walls(walls_t * walls, side_ir_data_t * side_data){

	uint32_t adc_data[4];

	walls->count++;

	front_poll(&adc_data[0]);

	char spf_buf[80];
	int len = sprintf(spf_buf, "F: %i\r\n", AVG_DATA);
	bluetooth_transmit(spf_buf, len);

	if(AVG_DATA >= FRONT_THRESHOLD){
		walls->front_sum++;
	}

	if(walls->front_sum/walls->count > 0.5){
		walls->flags.front = 1;
	}
	else{
		walls->flags.front = 0;
	}


	if( side_data->left_front >= LEFT_THRESHOLD){
		walls->left_sum++;
	}

	if(walls->left_sum/walls->count > 0.5){
		walls->flags.left = 1;
	}
	else{
		walls->flags.left = 0;
	}

	if( side_data->right_front >= RIGHT_THRESHOLD){
		walls->right_sum++;
	}

	if(walls->right_sum/walls->count > 0.5){
		walls->flags.right = 1;
	}
	else{
		walls->flags.right = 0;

	}

}


//void check_walls(walls_t * walls, side_ir_data_t * side_data){
//
//
//		uint32_t adc_data[4];
//
//		walls->count++;
//
//		front_poll(&adc_data[0]);
//
////		char spf_buf[80];
////		int len = sprintf(spf_buf, "F: %i\r\n", AVG_DATA);
////		bluetooth_transmit(spf_buf, len);
//
//		if(AVG_DATA >= FRONT_THRESHOLD){
//			walls->flags.front = 1;
//		}
//
//		if( side_data->left_front >= LEFT_THRESHOLD){
//			walls->flags.left = 1;
//		}
//
//		if( side_data->right_front >= RIGHT_THRESHOLD){
//			walls->flags.right = 1;
//		}
//
//}

void stream_ir(char* val) {
	if(strcmp(val, "on") == 0) {
		stream_buf = true;
	} else {
		if(strcmp(val, "off") == 0) {
			stream_buf = false;
		} else {
			bluetooth_transmit("Invalid IR Stream Value! 'on' or 'off'\r\n", 36);
		}
	}
}

void ir_sensor_init(void) {

	// Allow register access to ADC0 and ADC1
	SysCtlPeripheralEnable( SYSCTL_PERIPH_ADC0);
	SysCtlPeripheralEnable( SYSCTL_PERIPH_ADC1);

	// Configure all of the pins on the ADC's for ADC Type
	GPIOPinTypeADC(GPIO_PORTB_BASE, GPIO_PIN_4);
	GPIOPinTypeADC(GPIO_PORTB_BASE, GPIO_PIN_5);

	GPIOPinTypeADC(GPIO_PORTD_BASE, GPIO_PIN_0);
	GPIOPinTypeADC(GPIO_PORTD_BASE, GPIO_PIN_1);
	GPIOPinTypeADC(GPIO_PORTD_BASE, GPIO_PIN_2);
	GPIOPinTypeADC(GPIO_PORTD_BASE, GPIO_PIN_3);

	GPIOPinTypeADC(GPIO_PORTE_BASE, GPIO_PIN_4);
	GPIOPinTypeADC(GPIO_PORTE_BASE, GPIO_PIN_5);

	// Configure all of the pins for the IR Emitters
	GPIOPinTypeGPIOOutput(GPIO_PORTB_BASE, GPIO_PIN_6 | GPIO_PIN_7);
	GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6);
	GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_4);

	/**
	 * Enable Sample Sequencer 1 on ADC0
	 *
	 * This Sample Sequencer will be used to sample the SIDE_1_IR receivers
	 * We will sample the LEFT_FRONT first (PD2 - CH5) and then sample
	 * the RIGHT_BACK (PB5 - CH11)
	 *
	 */
	ADCSequenceConfigure(ADC0_BASE, 1, ADC_TRIGGER_PROCESSOR, 1);
	ADCSequenceStepConfigure(ADC0_BASE, 1, 0, ADC_CTL_CH5);
	ADCSequenceStepConfigure(ADC0_BASE, 1, 1, ADC_CTL_CH11| ADC_CTL_IE);
	ADCSequenceStepConfigure(ADC0_BASE, 1, 2, ADC_CTL_CH7 | ADC_CTL_END);
	ADCSequenceEnable(ADC0_BASE, 1);
	//ADCHardwareOversampleConfigure(ADC0_BASE, 8);


	/**
	 * Enable Sample Sequencer 2 on ADC0
	 *
	 * This Sample Sequencer will be used to sample the SIDE_2_IR receivers
	 * We will sample the RIGHT_FRONT first (PB4 - CH10) and then sample
	 * the LEFT_BACK (PD3 - CH4)
	 *
	 */
	ADCSequenceConfigure(ADC0_BASE, 2, ADC_TRIGGER_PROCESSOR, 0);
	ADCSequenceStepConfigure(ADC0_BASE, 2, 0, ADC_CTL_CH10);
	ADCSequenceStepConfigure(ADC0_BASE, 2, 1, ADC_CTL_CH4| ADC_CTL_IE);
	ADCSequenceStepConfigure(ADC0_BASE, 2, 2, ADC_CTL_CH1 | ADC_CTL_END);
	ADCSequenceEnable(ADC0_BASE, 2);

	/**
	 * Enable Sample Sequencer 1 on ADC1
	 *
	 * This Sample Sequencer will be used to sample the Front IR receivers
	 * We will sample the FRONT_LEFT first (PD0 - CH7) and then sample
	 * the FRONT_RIGHT (PE5 - CH8)
	 *
	 */
	ADCSequenceConfigure(ADC1_BASE, 1, ADC_TRIGGER_PROCESSOR, 0);
	ADCSequenceStepConfigure(ADC1_BASE, 1, 0, ADC_CTL_CH7);
	ADCSequenceStepConfigure(ADC1_BASE, 1, 1, ADC_CTL_CH8| ADC_CTL_IE);
	ADCSequenceStepConfigure(ADC1_BASE, 1, 2, ADC_CTL_CH1 | ADC_CTL_END);
	ADCSequenceEnable(ADC1_BASE, 1);

	/**
	 * Enable Sample Sequencer 2 on ADC1
	 *
	 * This Sample Sequencer will be used to sample the Diagnonal IR receivers
	 * We will sample the IR_DIAGONAL_L first (PD1 - CH6) and then sample
	 * the IR_DIAGONAL_R (PE4 - CH9)
	 *
	 */
	ADCSequenceConfigure(ADC1_BASE, 2, ADC_TRIGGER_PROCESSOR, 1);
	ADCSequenceStepConfigure(ADC1_BASE, 2, 0, ADC_CTL_CH6);
	ADCSequenceStepConfigure(ADC1_BASE, 2, 1, ADC_CTL_CH9| ADC_CTL_IE);
	ADCSequenceStepConfigure(ADC1_BASE, 2, 2, ADC_CTL_CH1 | ADC_CTL_END);
	ADCSequenceEnable(ADC1_BASE, 2);
}

void update_ir_duty(char * value){

	uint8_t valint;
	valint = atoi(value);

	if(valint > MAX_IR_DUTY){
		ir_duty = MAX_IR_DUTY;
	}
	else{
		ir_duty = valint;
	}

}

void calibrate_front(){

	uint32_t front_data[4];

	// Poll once before loop
	front_poll(&front_data[0]);

	while( (front_data[0] > FRONT_THRESHOLD_UPPER) || (front_data[0] < FRONT_THRESHOLD_LOWER) ){

		// If we are too far away from the wall move forward slowly
		if( front_data[0] < FRONT_THRESHOLD_LOWER){

			// Start moving slowly forward
			update_motor(RIGHT_MOTOR, CCW, 85);
			update_motor(LEFT_MOTOR, CW, 100);

			while(front_data[0] < FRONT_THRESHOLD_LOWER){
				front_poll(&front_data[0]);
			}

			// Turn the motors off
			update_motor(RIGHT_MOTOR, CCW, 0);
			update_motor(LEFT_MOTOR, CW, 0);

		}


		// If we are too close to the wall move backward slowly
		if(front_data[0] > FRONT_THRESHOLD_UPPER){

			// Start moving slowly forward
			update_motor(RIGHT_MOTOR, CW, 85);
			update_motor(LEFT_MOTOR, CCW, 100);

			while(front_data[0] > FRONT_THRESHOLD_UPPER){
				front_poll(&front_data[0]);
			}

			// Turn the motors off
			update_motor(RIGHT_MOTOR, CCW, 0);
			update_motor(LEFT_MOTOR, CW, 0);

		}

		// Poll again to get new data
		front_poll(&front_data[0]);
	}
}

void calibrate_left(void){

	side_ir_data_t side_data;

	side_poll(&side_data);

	while( abs(side_data.left_back - side_data.left_front) >= LEFT_DIFF_THRESHOLD){

		if (side_data.left_back > side_data.left_front){

			update_motor(LEFT_MOTOR, CCW, 100);
			update_motor(RIGHT_MOTOR, CCW, 85);

		}
		else{

			update_motor(LEFT_MOTOR, CW, 100);
			update_motor(RIGHT_MOTOR, CW, 85);

		}

		side_poll(&side_data);

	}

	update_motor(LEFT_MOTOR, BRAKE, 500);
	update_motor(RIGHT_MOTOR, BRAKE, 500);

}

void calibrate_right(void){


	side_ir_data_t side_data;

	side_poll(&side_data);

	while( abs(side_data.right_back - side_data.right_front) >= RIGHT_DIFF_THRESHOLD){

		if (side_data.right_back > side_data.right_front){

			update_motor(LEFT_MOTOR, CW, 100);
			update_motor(RIGHT_MOTOR, CW, 85);

		}
		else{

			update_motor(LEFT_MOTOR, CCW, 100);
			update_motor(RIGHT_MOTOR, CCW, 85);

		}

		side_poll(&side_data);

	}

	update_motor(LEFT_MOTOR, BRAKE, 500);
	update_motor(RIGHT_MOTOR, BRAKE, 500);
}


