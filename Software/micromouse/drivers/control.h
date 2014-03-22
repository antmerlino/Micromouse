/*
 * control.h
 *
 *  Created on: Mar 21, 2014
 *      Author: Anthony
 */

#ifndef CONTROL_H_
#define CONTROL_H_

#define SETPOINT 0

#define KP .00001
#define KI 0
#define KD 0

void drive_straight();
void control_init();

#endif /* CONTROL_H_ */