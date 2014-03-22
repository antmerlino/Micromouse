/*
 * bluetooth.c
 *
 *  Created on: Mar 18, 2014
 *      Author: Anthony
 */


#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <inc/hw_memmap.h>
#include <inc/hw_types.h>
#include <inc/hw_ints.h>
#include <inc/hw_gpio.h>

#include <driverlib/gpio.h>
#include <driverlib/sysctl.h>
#include <driverlib/pin_map.h>

#include <xdc/runtime/System.h>

#include <ti/drivers/uart/UARTTiva.h>
#include <ti/drivers/UART.h>

#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/BIOS.h>

#include "system.h"
#include "bluetooth.h"

typedef struct {
	UART_Handle handle;
	UART_Params params;
} bluetooth_t;

Semaphore_Handle sem_handle;
Semaphore_Params sem_params;

bluetooth_t bluetooth;

void bluetooth_init() {
	SysCtlPeripheralEnable(SYSCTL_PERIPH_UART4);
	GPIOPinConfigure(GPIO_PC4_U4RX);
	GPIOPinConfigure(GPIO_PC5_U4TX);
	GPIOPinTypeUART(GPIO_PORTC_BASE, GPIO_PIN_4 | GPIO_PIN_5);

	Semaphore_Params_init(&sem_params);
	sem_params.mode = Semaphore_Mode_BINARY;
	sem_handle = Semaphore_create(0, &sem_params, NULL);
}

void bluetooth_open(){
	UART_Params_init(&(bluetooth.params));
	bluetooth.params.baudRate  = 115200;
	bluetooth.params.writeDataMode = UART_DATA_BINARY;
	bluetooth.params.readDataMode = UART_DATA_BINARY;
	bluetooth.params.readReturnMode = UART_RETURN_FULL;
	bluetooth.params.readEcho = UART_ECHO_OFF;
	bluetooth.handle = UART_open(BLUETOOTH, &(bluetooth.params));
	if (!bluetooth.handle) {
		System_printf("UART did not open");
	}
}

int bluetooth_transmit(Char *data, int len) {
	return UART_write(bluetooth.handle, data, len);
	//System_printf("The UART wrote %d bytes\n", ret);
}

void process_cmd(char* cmd, char* val) {
	int i;
	for(i = 0; i < NUM_REG_FUNCS; i++){
		if(strcmp(reg_funcs[i].func_name, cmd) == 0) {
			reg_funcs[i].funcptr(val);
			return;
		}
	}
	bluetooth_transmit("Invalid Command!\r\n", 18);
}

void parse_phrase(char* phrase, uint32_t len) {
	int i, sp_ind;
	sp_ind = -1;
	// Find Space
	for (i = 0; i < len; i++) {
		if(phrase[i] == ' ') {
			sp_ind = i;
		}
	}
	if(sp_ind >= 0) {
		// Place in null chars after
		char *ph_str = phrase + sp_ind;
		*ph_str = '\0';
		ph_str = phrase + len;
		*ph_str = '\0';
		// Process strings
		process_cmd(phrase, phrase + sp_ind + 1);
	} else {
		bluetooth_transmit("Invalid Command!\r\n", 18);
	}
}

void help_func(void) {
	bluetooth_transmit("Use this interface to communicate with modules:\r\nFormat: COMMAND VALUE\r\nAvailable Commands:\r\n",93);
	int i;
	for(i = 0; i < NUM_REG_FUNCS; i++){
		bluetooth_transmit(&(reg_funcs[i].func_name[0]),16);
		bluetooth_transmit("\r\n",2);
	}
}

void bluetooth_rx_task(UArg arg1, UArg arg2) {
	char bt_rx_char;
	char bt_rx_buf[128];
	uint32_t bt_rx_buf_index = 0;
	while(1) {
		int rx_len = UART_read(bluetooth.handle, &bt_rx_char, 1);
		if(rx_len) {
			bluetooth_transmit(&bt_rx_char, 1);
			switch(bt_rx_char) {
				// Backspace
				case 8:
					if(bt_rx_buf_index > 0) {
						bt_rx_buf_index--;
					}
					break;
				// Return Pressed
				case '\r':
					bluetooth_transmit("\r\n", 2);
					// Add NULL to end of string
					*(&(bt_rx_buf[0]) + bt_rx_buf_index) = '\0';
					if(strcmp(bt_rx_buf, "help") == 0){
						help_func();
					} else {
						parse_phrase(bt_rx_buf, bt_rx_buf_index);
					}
					bt_rx_buf_index = 0;
					break;
				// Add Char to Buffer
				default:
					bt_rx_buf[bt_rx_buf_index] = bt_rx_char;
					bt_rx_buf_index = (bt_rx_buf_index+1) % 128;
			}
		}
	}
}

void testfunc(char* val){
	// Find Length
	int int_val = atoi(val);
	char out[32];
	uint8_t len = System_sprintf(out, "testfunc: %i", int_val);
	bluetooth_transmit(out, len);
}

void uart_ctrl(char* val) {
	// Nothing Currently
}
