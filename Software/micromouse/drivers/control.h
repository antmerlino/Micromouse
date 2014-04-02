/*
 * control.h
 *
 *  Created on: Mar 21, 2014
 *      Author: Anthony
 */

#ifndef CONTROL_H_
#define CONTROL_H_

#define SETPOINT -600
#define TURN_SPEED 100

#define MOTOR_SPEED_OFFSET 4

#define INITIAL_WALLS 0x07

#define NUMTICKS_PER_BLOCK 285
#define NUMTICKS_FULL_TURN 230
#define NUMTICKS_HALF_TURN 100
#define WALL_CHECK_ZONE 50

#define ENCODER_SCALE 50

#define COMP_HIGH 0.7
#define COMP_LOW 1-COMP_HIGH

typedef enum {
	RESET = -1,
	STRAIGHT,
	TURN_RIGHT,
	TURN_AROUND,
	TURN_LEFT,
	START
} control_state_t;

void control_loop();
void control_init();
void control_open();

// UART Callbavks
void set_pid_kp(char* val);
void set_pid_ki(char* val);
void set_pid_kd(char* val);
void set_motor_speed(char* val);
void toggle_ctrl_sys(char* val);
void stream_walls(char* val);
void stream_motor(char* val);
void stream_control(char* val);
void move_delay_tog(char* val);


// Switch HWI
void ctrlSwitchFxn(void);

#endif /* CONTROL_H_ */
