/*
 * led.c
 *
 *  Created on: Mar 26, 2014
 *      Author: Anthony
 */

#include <inc/hw_gpio.h>
#include <inc/hw_memmap.h>

#include <ti/drivers/GPIO.h>

#include "led.h"


void led_init(){

	/* PF0 requires unlocking before configuration */
	HWREG(GPIO_PORTF_BASE + GPIO_O_LOCK) = GPIO_LOCK_KEY;
	HWREG(GPIO_PORTF_BASE + GPIO_O_CR) |= GPIO_PIN_0;
	GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_0);
	HWREG(GPIO_PORTF_BASE + GPIO_O_LOCK) = GPIO_LOCK_M;

	GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_7);
	GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1);
}

void led_on(micromouse_gpio_name_t color){
	GPIO_write(color, ON);
}

void led_off(micromouse_gpio_name_t color){
	GPIO_write(color, OFF);
}

void led_toggle(micromouse_gpio_name_t color){
	GPIO_toggle(color);
};
