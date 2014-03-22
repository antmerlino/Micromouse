/*
 * bluesmirf.h
 *
 *  Created on: Mar 21, 2014
 *      Author: Anthony
 */

#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_


void bluetooth_init();

void bluetooth_open();

void bluetooth_transmit(char *data, int len) ;

void bluetooth_receive(char *data, int len);


#endif /* BLUETOOTH_H_ */
