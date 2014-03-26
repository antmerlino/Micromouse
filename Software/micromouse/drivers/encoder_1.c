#include "stdbool.h"
#include "stdint.h"
#include <stdlib.h>
#include <stdio.h>

#include "driverlib/adc.h"
#include "driverlib/sysctl.h"
#include <driverlib/gpio.h>
#include "inc/hw_ints.h"
#include "inc/hw_types.h"
#include "inc/hw_gpio.h"
#include "inc/hw_memmap.h"
#include <ti/drivers/GPIO.h>

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>

#include "system.h"
#include "control.h"
#include "encoder.h"
#include "drivers/bluetooth.h"

static volatile uint32_t left_motor_ticks  = 0;
static volatile uint32_t right_motor_ticks = 0;

bool stream_buf_encoder = false;
char spf_buf_encoder[80];

uint8_t check_walls = 0;

void encoder_init() {
	GPIOPinTypeGPIOInput(GPIO_PORTE_BASE, GPIO_PIN_1);
	GPIOPinTypeGPIOInput(GPIO_PORTE_BASE, GPIO_PIN_3);
	GPIOPadConfigSet(GPIO_PORTE_BASE, GPIO_PIN_1, GPIO_STRENGTH_12MA, GPIO_PIN_TYPE_STD);
	GPIOPadConfigSet(GPIO_PORTE_BASE, GPIO_PIN_3, GPIO_STRENGTH_12MA, GPIO_PIN_TYPE_STD);
}

void encoder_open() {
	GPIO_enableInt(INPUT_ENCODER_R, GPIO_INT_RISING); // Enable interrupts
	GPIO_enableInt(INPUT_ENCODER_L, GPIO_INT_RISING); // Enable interrupts
}

void left_encoder_count() {

	left_motor_ticks += 1;
	GPIOIntClear(GPIO_PORTE_BASE, GPIO_PIN_3);
}

void right_encoder_count() {

	right_motor_ticks += 1;
	GPIOIntClear(GPIO_PORTE_BASE, GPIO_PIN_1);
}

void check_distance() {

	uint32_t avg_ticks = (right_motor_ticks + left_motor_ticks)/2;

	if( (avg_ticks >= NUMTICKS_PER_BLOCK/2) & (avg_ticks <= NUMTICKS_PER_BLOCK + WALL_CHECK_ZONE)){
		check_walls = 1;
	}
	else{
		check_walls = 0;
	}

	if((avg_ticks)/2 >= NUMTICKS_PER_BLOCK){
		//DO MOVE
		left_motor_ticks = 0;
		right_motor_ticks = 0;
	}

	if(stream_buf_encoder){
		int len = sprintf(spf_buf_encoder, "R: %i, L: %i\r\n", right_motor_ticks, left_motor_ticks);
		bluetooth_transmit(spf_buf_encoder, len);
	}
}

void stream_encoder(char* val) {
	if(strcmp(val, "on") == 0) {
		stream_buf_encoder = true;
	} else {
		if(strcmp(val, "off") == 0) {
			stream_buf_encoder = false;
		} else {
			bluetooth_transmit("Invalid Encoder Stream Value! 'on' or 'off'\r\n", 36);
		}
	}
}
