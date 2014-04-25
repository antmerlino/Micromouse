/**
 * @file system.h
 *
 * @defgroup system System Module
 *
 *  Created on: Mar 18, 2014
 *      @author: Anthony Merlino
 *
 * @version 2014.03.26
 * @{
 */


/** @page system_purpose Purpose of System Module
 *
 *	The System module provides two primary purposes.  The first
 *	is to provide a wrapper function to initialize all subsystems
 *	in one function call.  The second is to register all GPIO and UART
 *	with TI-RTOS.
 *
 */

#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <inc/hw_ints.h>
#include <inc/hw_gpio.h>
#include <inc/hw_memmap.h>

#include <ti/drivers/GPIO.h>

#include <ti/sysbios/family/arm/m3/Hwi.h>

#include <ti/drivers/uart/UARTTiva.h>
#include <ti/drivers/UART.h>

#include "drivers/encoder.h"

#include "services/control.h"



///@{
/**
 * Used for GPIO control
 */
#define OFF (0)
#define ON (~0)
///@}


/**
 * Enumeration for all GPIO pins used.
 *
 * This enumeration is used to perform GPIO_write() and other
 * TI-RTOS GPIO functionality. This enumeration allows for clear
 * interfacing with GPIO.  Each entry represents an index in the
 * #gpioHWAttrs array found below.
 *
 */
typedef enum micromouse_gpio_name{
	LEFT_MOTOR_DIR_1 = 0,
	LEFT_MOTOR_DIR_2,
	RIGHT_MOTOR_DIR_1,
	RIGHT_MOTOR_DIR_2,
	STBY_MOTOR,
	IR_SIDE_1,
	IR_SIDE_2,
	IR_DIAG_LEFT,
	IR_DIAG_RIGHT,
	IR_FRONT_LEFT,
	IR_FRONT_RIGHT,
	INPUT_CTRL_SWITCH,
	INPUT_ENCODER_R,
	INPUT_ENCODER_L,
	LED_R,
	LED_G,
	LED_B,

	MICROMOUSE_GPIO_COUNT
} micromouse_gpio_name_t;


/**
 *  ### GPIO Hardware Attributes Array
 *
 *  This array holds the hardware attributes of the GPIO pins
 *  used for Micromouse.  The type GPIO_HWAttrs is a structure
 *  defined in TI-RTOS.  The structure consists of the port, pin,
 *  and direction of the GPIO pin.
 *
 */
const GPIO_HWAttrs gpioHWAttrs[MICROMOUSE_GPIO_COUNT] = {
	{GPIO_PORTA_BASE, GPIO_PIN_3, GPIO_OUTPUT}, /* LEFT_MOTOR_DIR_1 */
    {GPIO_PORTA_BASE, GPIO_PIN_2, GPIO_OUTPUT}, /* LEFT_MOTOR_DIR_2 */
    {GPIO_PORTA_BASE, GPIO_PIN_5, GPIO_OUTPUT}, /* RIGHT_MOTOR_DIR_1 */
    {GPIO_PORTA_BASE, GPIO_PIN_6, GPIO_OUTPUT}, /* RIGHT_MOTOR_DIR_2 */
    {GPIO_PORTA_BASE, GPIO_PIN_4, GPIO_OUTPUT}, /* STBY_MOTOR */
    {GPIO_PORTF_BASE, GPIO_PIN_4, GPIO_OUTPUT}, /* IR_SIDE_1 */
	{GPIO_PORTD_BASE, GPIO_PIN_4, GPIO_OUTPUT}, /* IR_SIDE_2 */
	{GPIO_PORTB_BASE, GPIO_PIN_7, GPIO_OUTPUT}, /* IR_DIAG_LEFT */
	{GPIO_PORTD_BASE, GPIO_PIN_5, GPIO_OUTPUT}, /* IR_DIAG_RIGHT */
	{GPIO_PORTB_BASE, GPIO_PIN_6, GPIO_OUTPUT}, /* IR_FRONT_LEFT */
	{GPIO_PORTD_BASE, GPIO_PIN_6, GPIO_OUTPUT}, /* IR_FRONT_RIGHT */
	{GPIO_PORTA_BASE, GPIO_PIN_1, GPIO_INPUT},  /* INPUT_CTRL_SWITCH */
	{GPIO_PORTE_BASE, GPIO_PIN_1, GPIO_INPUT},  /* INPUT_ENCODER_R */
	{GPIO_PORTE_BASE, GPIO_PIN_3, GPIO_INPUT},  /* INPUT_ENCODER_L */
	{GPIO_PORTA_BASE, GPIO_PIN_7, GPIO_OUTPUT}, /* LED_R */
	{GPIO_PORTF_BASE, GPIO_PIN_0, GPIO_OUTPUT}, /* LED_G */
	{GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_OUTPUT}  /* LED_B */
};

/**
 * ### Port A - Callback Functions
 *
 * This is used with TI-RTOS to register functions for
 * GPIO input interrupts.
 *
 * On Port A, only one pin requires a callback.  This is used
 * for the mode switch
 */
Hwi_Struct portACallbackHwi;
const GPIO_Callbacks portACallbacks = {
	GPIO_PORTA_BASE, INT_GPIOA, &portACallbackHwi,
	{NULL, ctrlSwitchFxn, NULL, NULL, NULL, NULL, NULL, NULL}
};

/**
 * ### Port E - Callback Functions
 *
 * This is used with TI-RTOS to register functions for
 * GPIO input interrupts.
 *
 * On Port E, two pins requires a callback.  They are used
 * for both wheel encoder interrupts
 */
//Hwi_Struct portECallbackHwi;
//const GPIO_Callbacks portECallbacks = {
//	GPIO_PORTE_BASE, INT_GPIOE, &portECallbackHwi,
//	{NULL, right_encoder_count, NULL, left_encoder_count, NULL, NULL, NULL, NULL}
//};

const GPIO_Config GPIO_config[] = {
    {&gpioHWAttrs[0]},
    {&gpioHWAttrs[1]},
    {&gpioHWAttrs[2]},
    {&gpioHWAttrs[3]},
    {&gpioHWAttrs[4]},
    {&gpioHWAttrs[5]},
    {&gpioHWAttrs[6]},
    {&gpioHWAttrs[7]},
    {&gpioHWAttrs[8]},
    {&gpioHWAttrs[9]},
    {&gpioHWAttrs[10]},
    {&gpioHWAttrs[11]},
    {&gpioHWAttrs[12]},
	{&gpioHWAttrs[13]},
	{&gpioHWAttrs[14]},
	{&gpioHWAttrs[15]},
	{&gpioHWAttrs[16]},
    {NULL},
};

typedef enum micromouse_uart_name {
    BLUETOOTH=0,

    MICROMOUSE_UARTCOUNT
} micromouse_uart_name_t;

/* UART objects */
UARTTiva_Object uartTivaObjects[MICROMOUSE_UARTCOUNT];

/* UART configuration structure */
const UARTTiva_HWAttrs uartTivaHWAttrs[MICROMOUSE_UARTCOUNT] = {
    {UART4_BASE, INT_UART4}  /* BLUETOOTH - UART4 */
};

const UART_Config UART_config[] = {
    { // UART4
	&UARTTiva_fxnTable,
	&uartTivaObjects[0],
	&uartTivaHWAttrs[0]
    },
    {NULL, NULL, NULL}
};


/** Initializes Micromouse system by initializing all subsystems
 *
 * 	Initializes the following subsystems:
 *
 * 	-# Motor
 *
 * 	-# IR Sensor
 *
 * 	-# Encoder
 *
 * 	-# Status LED
 *
 * 	-# Bluetooth
 *
 * 	-# Maze Solver
 *
 * 	-# Control
 *
 */
void system_init();

#endif /* SYSTEM_H_ */
