#include <stdint.h>
#include <stdbool.h>
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
#include <ti/drivers/GPIO.h>

ti_sysbios_family_arm_m3_Hwi_Struct adc0ss1_hwi;
ti_sysbios_family_arm_m3_Hwi_Struct adc0ss2_hwi;

Hwi_Params adc0ss1_params;
Hwi_Params adc0ss2_params;

void side_poll(side_ir_data_t * side_ir_data){

		// Turn on the LEDs
		GPIO_write(IR_SIDE_1, ON);

		// Sleep so the LED can turn on
		Task_sleep(5);

		// Trigger ADC0 SS1
		ADCProcessorTrigger(ADC0_BASE, 1);

		// Wait until the sample sequence has completed.
		while(!ADCIntStatus(ADC0_BASE, 1, false))
		{
		}

		// Turn off the IR LED
		GPIO_write(IR_SIDE_1, OFF);

		// Read ADC Value
		ADCSequenceDataGet(ADC0_BASE, 1, &(side_ir_data->left_front));

		// Turn on the LEDs
		GPIO_write(IR_SIDE_2, ON);

		// Sleep so the LED can turn on
		Task_sleep(5);

		// Trigger ADC0 SS1
		ADCProcessorTrigger(ADC0_BASE, 2);

		// Wait until the sample sequence has completed.
		while(!ADCIntStatus(ADC0_BASE, 2, false))
		{
		}

		// Turn off the IR LED
		GPIO_write(IR_SIDE_2, OFF);

		// Read ADC Value
		ADCSequenceDataGet(ADC0_BASE, 2, &(side_ir_data->right_front));

		//bluetooth_transmit(&(side_ir_data.left_front_char[0]), 16);


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
	ADCSequenceConfigure(ADC0_BASE, 1, ADC_TRIGGER_PROCESSOR, 0);
	ADCSequenceStepConfigure(ADC0_BASE, 1, 0, ADC_CTL_CH5);
	ADCSequenceStepConfigure(ADC0_BASE, 1, 1, ADC_CTL_CH11|ADC_CTL_END | ADC_CTL_IE);
	ADCSequenceEnable(ADC0_BASE, 1);
	//ADCHardwareOversampleConfigure(ADC0_BASE, 16);


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
	ADCSequenceStepConfigure(ADC0_BASE, 2, 1, ADC_CTL_CH4|ADC_CTL_END | ADC_CTL_IE);
	ADCSequenceEnable(ADC0_BASE, 2);

}
