/*
 * sysem.c
 *
 *  Created on: Mar 18, 2014
 *      Author: Anthony Merlino and Brad Ebinger
 */
#include <stdint.h>
#include <stdbool.h>
#include <inc/hw_memmap.h>
#include <inc/hw_types.h>
#include <inc/hw_ints.h>
#include <inc/hw_gpio.h>

#include <driverlib/sysctl.h>

#include <ti/drivers/uart/UARTTiva.h>
#include <ti/drivers/UART.h>


#include "system.h"
#include "drivers/motor.h"
#include "drivers/ir_sensor.h"
#include "drivers/bluetooth.h"
#include "drivers/control.h"
#include "drivers/encoder.h"
#include "drivers/led.h"

/* GPIO configuration structure */
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
	{GPIO_PORTA_BASE, GPIO_PIN_1, GPIO_INPUT},  /*INPUT_CTRL_SWITCH */
	{GPIO_PORTE_BASE, GPIO_PIN_1, GPIO_INPUT},  /*INPUT_ENCODER_R */
	{GPIO_PORTE_BASE, GPIO_PIN_3, GPIO_INPUT},  /*INPUT_ENCODER_L */
	{GPIO_PORTA_BASE, GPIO_PIN_7, GPIO_OUTPUT},  /* LED_R */
	{GPIO_PORTF_BASE, GPIO_PIN_0, GPIO_OUTPUT},  /* LED_G */
	{GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_OUTPUT}   /* LED_B */


};

Hwi_Struct portACallbackHwi;
const GPIO_Callbacks portACallbacks = {
	GPIO_PORTA_BASE, INT_GPIOA, &portACallbackHwi,
	{NULL, ctrlSwitchFxn, NULL, NULL, NULL, NULL, NULL, NULL}
};

Hwi_Struct portECallbackHwi;
const GPIO_Callbacks portECallbacks = {
	GPIO_PORTE_BASE, INT_GPIOE, &portECallbackHwi,
	{NULL, right_encoder_count, NULL, left_encoder_count, NULL, NULL, NULL, NULL}
};

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

/* UART objects */
UARTTiva_Object uartTivaObjects[MICROMOUSE_UARTCOUNT];

/* UART configuration structure */
const UARTTiva_HWAttrs uartTivaHWAttrs[MICROMOUSE_UARTCOUNT] = {
    //{UART0_BASE, INT_UART0}, /* MICROMOUSEL_UART0 */
    //{UART3_BASE, INT_UART3},  /* DEBUG - UART3 */
    {UART4_BASE, INT_UART4}  /* BLUETOOTH - UART4 */
};

const UART_Config UART_config[] = {
//    { // UART0
//	&UARTTiva_fxnTable,
//	&uartTivaObjects[0],
//	&uartTivaHWAttrs[0]
//    },
//    { // UART3
//	&UARTTiva_fxnTable,
//	&uartTivaObjects[1],
//	&uartTivaHWAttrs[1]
//    },
    { // UART4
	&UARTTiva_fxnTable,
	&uartTivaObjects[0],
	&uartTivaHWAttrs[0]
    },
    {NULL, NULL, NULL}
};

void system_init(){

	/**
	 * Allow access to all GPIO port registers
	 */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);

#ifdef MOTORS_ENABLE
    motors_init();
#endif

#ifdef IR_ADC_SENSORS_ENABLE
    ir_sensor_init();
#endif

#ifdef ENCODER_ENABLE
    encoder_init();
#endif

#ifdef LED_ENABLE
    led_init();
#endif

#ifdef BLUETOOTH_ENABLE
    bluetooth_init();
#endif

#ifdef DEBUG_ENABLE
//INITIALIZE DEBUG
#endif

	UART_init();

#ifdef BLUETOOTH_ENABLE
    bluetooth_open();
#endif

#ifdef DEBUG_ENABLE
//OPEN DEBUG
#endif

    maze_solver_init();

    control_init();

    GPIO_init();

    control_open();
    encoder_open();

    GPIO_setupCallbacks(&portACallbacks); // Setup interrupts
    GPIO_setupCallbacks(&portECallbacks); // Setup interrupts
}
