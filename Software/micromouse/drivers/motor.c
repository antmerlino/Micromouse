/*
 * motor.c
 *
 *  Created on: Mar 18, 2014
 *      Author: Anthony Merlino and Brad Ebinger
 */

#include <stdint.h>
#include <stdbool.h>
#include <inc/hw_memmap.h>
#include <driverlib/gpio.h>
#include <driverlib/pin_map.h>
#include <driverlib/pwm.h>
#include <driverlib/sysctl.h>
#include <ti/drivers/GPIO.h>
#include <xdc/std.h>

#include "motor.h"

#define PWM_PIN_OUT(x) 1<<x

static inline calc_cycles(uint32_t us) {return (PWM_TIMER_FREQ/1000000.0)*us;}
static inline calc_usec(uint32_t cycles) {return (1000000.0/PWM_TIMER_FREQ)*cycles;}

void motors_init(void) {

	int i;
	uint8_t pin_mask;
	uint32_t motor_per;

	// Set Pins to output/PWM in GPIO
	SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM1);
	GPIOPinConfigure(GPIO_PF2_M1PWM6);
	GPIOPinConfigure(GPIO_PF3_M1PWM7);
	GPIOPinTypePWM(GPIO_PORTF_BASE, GPIO_PIN_2 | GPIO_PIN_3);

	// Configure the pin for standby control
	GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6);

	SysCtlPWMClockSet(SYSCTL_PWMDIV_64);
	// Configure the PWM for each pin:
	// Turn on the generators and set the PW to 0
	// The output is still OFF. Turn on with set_motor_pwm_state
	for (i = 0; i < NUM_MOTORS; i++) {
		PWMGenConfigure(motors[i].pwm_base_module, motors[i].pwm_generator, PWM_GEN_MODE_DOWN | PWM_GEN_MODE_NO_SYNC);
		motor_per = calc_cycles(MOTOR_PERIOD);
		PWMGenPeriodSet(motors[i].pwm_base_module, motors[i].pwm_generator, motor_per);
		PWMPulseWidthSet(motors[i].pwm_base_module, motors[i].pwm_pin, 0);
		PWMGenEnable(motors[i].pwm_base_module, motors[i].pwm_generator);
		pin_mask = 1 << (0x0000000F & motors[i].pwm_pin);
		PWMOutputState(motors[i].pwm_base_module, pin_mask, 0);
	}

}

void update_motor(motor_index_t index, motor_direction_t direction, uint16_t duty_tenths_perc){

	GPIO_write(STBY_MOTOR, ON);

	switch(direction){
		case CW:
			// Set the pins so that the direction is Clockwise
			GPIO_write(motors[index].dir_pins[0], ON);
			GPIO_write(motors[index].dir_pins[1], OFF);
			break;
		case CCW:
			// Set the pins so that the direction is Counter-Clockwise
			GPIO_write(motors[index].dir_pins[0], OFF);
			GPIO_write(motors[index].dir_pins[1], ON);
			break;
		case BRAKE:
			// Set the pins so that we brake
			GPIO_write(motors[index].dir_pins[0], ON);
			GPIO_write(motors[index].dir_pins[1], ON);
			break;
		case STOP:
			// Set the pins so we stop
			GPIO_write(motors[index].dir_pins[0], OFF);
			GPIO_write(motors[index].dir_pins[1], OFF);
			break;
		default:
			break;
	}

	uint32_t usec = MOTOR_PERIOD*duty_tenths_perc/1000;
	set_pulse_width(index, &usec);

}


void set_pulse_width(motor_index_t index, uint32_t *uSec) {
	uint32_t cycles = calc_cycles(*uSec);

	uint8_t pin_mask;
	// set uSec as closest value as possible with Timer settings
	*uSec = calc_usec(cycles);
	pin_mask = 1 << (0x0000000F & motors[index].pwm_pin);

	if(cycles <= 0){
		PWMOutputState(motors[index].pwm_base_module, pin_mask, 0);
	}
	else{
		PWMOutputState(motors[index].pwm_base_module, pin_mask, 1);
		PWMPulseWidthSet(motors[index].pwm_base_module, motors[index].pwm_pin, cycles);
	}

}

