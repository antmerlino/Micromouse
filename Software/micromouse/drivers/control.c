/*
 * control.c
 *
 *  Created on: Mar 21, 2014
 *      Author: Anthony
 */
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/knl/Task.h>

#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/BIOS.h>

#include <ti/drivers/GPIO.h>
#include <inc/hw_ints.h>
#include <inc/hw_gpio.h>

#include <xdc/runtime/System.h>

#include "system.h"

#include "drivers/motor.h"
#include "drivers/bluetooth.h"
#include "drivers/ir_sensor.h"
#include "drivers/led.h"

#include "services/pid.h"
#include "services/time_keeper.h"
#include "services/maze_solver.h"

#include "control.h"

typedef struct straight_pid_params_t {
	float kp;
	float ki;
	float kd;
	uint32_t motor_speed;
}straight_pid_params_t;

straight_pid_params_t straight_control_params = {1.0, 1.0, 1.0, 200};

Semaphore_Handle drive_straight_sem_handle;
Semaphore_Params drive_straight_sem_params;

walls_t walls;

uint8_t explore = 1;
uint8_t first_check = 1;

side_ir_data_t side_data;

int * path_moves;

control_state_t micromouse_state = RESET;

pid_controller_t side_pid;

bool stream_buf_encoder = false;
char spf_buf_encoder[80];

bool stream_buf_motor = false;
char spf_buf_motor[80];

bool stream_buf_ctl = false;
char spf_buf_ctl[80];

bool delay_on = false;

bool stop_control_loop = true;

void control_loop(){


	//uint32_t left_avg;
	//uint32_t right_avg;

	int32_t ir_diff;
	int32_t encoder_diff;

	float error;
	float measurement;

	int16_t right_motor_out;
	int16_t left_motor_out;


	while(1){
		Semaphore_pend(drive_straight_sem_handle, BIOS_WAIT_FOREVER);

		check_distance();

		side_poll(&side_data);
		check_walls(&walls, &side_data); //Potentially return irdiff here. Include in walls struct. Currently using redundant logic here to make decisions.
		ir_diff=walls.wall_diff;
		switch(micromouse_state){

			case STRAIGHT:

				// Find the average data for each side
				//left_avg = (side_data.left_front + side_data.left_back)/2;
				//right_avg = (side_data.right_front + side_data.right_back)/2;
				/*
				// If there is a missing wall on both sides, we'll just use the encoder data, so set the ir_diff = 0
				if((walls.flags.left == 0) && (walls.flags.right == 0 )){
					ir_diff = 0;
				}
				else if(walls.flags.left == 0){
					// Using only the right IR information, try to hold the theoretical center
					ir_diff = 2*(IR_CENTERED - right_avg);
				}
				else if(walls.flags.right ==0){
					// Using only the left IR information, try to hold the theoretical center
					ir_diff = 2*(left_avg - IR_CENTERED);
				}
				else{
					// Since we have a wall on both sides, find the difference between the two averages
					ir_diff = left_avg - right_avg;
				}
				*/
				error = pid_step(&side_pid, SETPOINT, ir_diff, (float)get_curr_time_us())/100;

				// Use the error term to correct the motors
				right_motor_out = straight_control_params.motor_speed - MOTOR_SPEED_OFFSET + error/2;
				left_motor_out = straight_control_params.motor_speed + MOTOR_SPEED_OFFSET - error/2;

				if(right_motor_out < 0){
					update_motor(RIGHT_MOTOR, CW, -1*right_motor_out);
				}
				else{
					update_motor(RIGHT_MOTOR, CCW, right_motor_out);
				}

				if(left_motor_out < 0){
					update_motor(LEFT_MOTOR, CCW, -1*left_motor_out);
				}
				else{
					update_motor(LEFT_MOTOR, CW, left_motor_out);
				}

				if(stream_buf_motor){
					int len = sprintf(spf_buf_motor, "L: %i, R: %i, D: %f\r\n", left_motor_out, right_motor_out, measurement);
					bluetooth_transmit(spf_buf_motor, len);
				}

				if(stream_buf_ctl){
					int len = sprintf(spf_buf_ctl, "IR: %i, E: %i, M: %f\r\n", ir_diff, encoder_diff, measurement);
					bluetooth_transmit(spf_buf_ctl, len);
				}

				break;

			case TURN_AROUND:

				update_motor(RIGHT_MOTOR, CW, TURN_SPEED - MOTOR_SPEED_OFFSET);
				update_motor(LEFT_MOTOR, CW, TURN_SPEED + MOTOR_SPEED_OFFSET);
				pid_init(&side_pid, straight_control_params.kp, straight_control_params.ki, straight_control_params.kd, (float)get_curr_time_us());
				break;

			case TURN_RIGHT:

				update_motor(RIGHT_MOTOR, CW, TURN_SPEED - MOTOR_SPEED_OFFSET);
				update_motor(LEFT_MOTOR, CW, TURN_SPEED + MOTOR_SPEED_OFFSET);
				pid_init(&side_pid, straight_control_params.kp, straight_control_params.ki, straight_control_params.kd, (float)get_curr_time_us());
				break;

			case TURN_LEFT:

				update_motor(RIGHT_MOTOR, CCW, TURN_SPEED - MOTOR_SPEED_OFFSET);
				update_motor(LEFT_MOTOR, CCW, TURN_SPEED + MOTOR_SPEED_OFFSET);
				pid_init(&side_pid, straight_control_params.kp, straight_control_params.ki, straight_control_params.kd, (float)get_curr_time_us());
				break;

			case RESET:

				update_motor(LEFT_MOTOR, CW, 0);
				update_motor(RIGHT_MOTOR, CCW, 0);
				pid_init(&side_pid, straight_control_params.kp, straight_control_params.ki, straight_control_params.kd, (float)get_curr_time_us());
				left_motor_ticks = 0;
				right_motor_ticks = 0;
				break;

			case START:

				Task_sleep(2000);

				walls.wall_int = 0;
				walls.flags.right = 1;
				walls.flags.left = 1;

				if(explore){

					maze_clear();
					maze_update_node(INITIAL_WALLS);

					micromouse_state = (control_state_t) maze_next_direction_dfs();
				}
				else{

					path_moves = maze_dijkstras_algorithm(0, 0, 8, 8);

					micromouse_state = (control_state_t)*path_moves;
					path_moves++;

				}

				break;

			default:
				break;
		}
	}
}

void check_distance(){

	uint32_t avg_ticks;
	avg_ticks = (right_motor_ticks + left_motor_ticks)/2;

	switch(micromouse_state){

		case STRAIGHT:

			if(explore){

				if( avg_ticks >= NUMTICKS_PER_BLOCK){

					maze_update_node(walls.wall_int);

					micromouse_state = (control_state_t) maze_next_direction_dfs();

					if(micromouse_state != STRAIGHT){
						update_motor(LEFT_MOTOR, BRAKE, 500);
						update_motor(RIGHT_MOTOR, BRAKE, 500);
						Task_sleep(250);
					}

					if( (walls.flags.front == 1) && ( (micromouse_state == TURN_AROUND) || (micromouse_state == TURN_RIGHT) || (micromouse_state == TURN_LEFT) ) ){

						calibrate_front();

					}

					if(delay_on){
						update_motor(LEFT_MOTOR, CW, 0);
						update_motor(RIGHT_MOTOR, CCW, 0);

						Task_sleep(1000);
					}

					left_motor_ticks = 0;
					right_motor_ticks = 0;
				}
			}
			else
			{
				if( avg_ticks >= NUMTICKS_PER_BLOCK){

					micromouse_state = (control_state_t)*path_moves;
					path_moves++;

					first_check = 1;
					left_motor_ticks = 0;
					right_motor_ticks = 0;

				}
			}
			break;

		case TURN_AROUND:

			if(avg_ticks >= NUMTICKS_FULL_TURN){

				// Brake!
				update_motor(LEFT_MOTOR, BRAKE, 500);
				update_motor(RIGHT_MOTOR, BRAKE, 500);

				Task_sleep(1000);

				uint8_t i;
				for(i = 0; i < 5; i++)
				{
				side_poll(&side_data);
				check_walls(&walls, &side_data);
				}

				if(walls.flags.left && walls.flags.right){
					calibrate_left();
					calibrate_right();
				}

				if(walls.flags.left && !walls.flags.right){
					calibrate_left();
				}

				if(walls.flags.right && !walls.flags.left){
					calibrate_right();
				}

				micromouse_state = STRAIGHT;
				left_motor_ticks = 0;
				right_motor_ticks = 0;



			}
			break;

		case TURN_RIGHT:

			if(avg_ticks >= NUMTICKS_HALF_TURN){

				// Brake!
				update_motor(LEFT_MOTOR, BRAKE, 500);
				update_motor(RIGHT_MOTOR, BRAKE, 500);

				Task_sleep(1000);

				uint8_t i;
				for(i = 0; i < 5; i++)
				{
				side_poll(&side_data);
				check_walls(&walls, &side_data);
				}

				if(walls.flags.left && walls.flags.right){
					calibrate_left();
					calibrate_right();
				}

				if(walls.flags.left && !walls.flags.right){
					calibrate_left();
				}

				if(walls.flags.right && !walls.flags.left){
					calibrate_right();
				}

				micromouse_state = STRAIGHT;
				left_motor_ticks = 0;
				right_motor_ticks = 0;



			}
		break;

		case TURN_LEFT:

			if(avg_ticks >= NUMTICKS_HALF_TURN){

				// Brake!
				update_motor(LEFT_MOTOR, BRAKE, 500);
				update_motor(RIGHT_MOTOR, BRAKE, 500);

				Task_sleep(1000);

				uint8_t i;
				for(i = 0; i < 20; i++)
				{
				side_poll(&side_data);
				check_walls(&walls, &side_data);
				}

				if(walls.flags.left && walls.flags.right){
					calibrate_left();
					calibrate_right();
				}

				if(walls.flags.left && !walls.flags.right){
					calibrate_left();
				}

				if(walls.flags.right && !walls.flags.left){
					calibrate_right();
				}

				micromouse_state = STRAIGHT;
				left_motor_ticks = 0;
				right_motor_ticks = 0;

			}
		break;

		default:
			break;
	}

	if(stream_buf_encoder){
		int len = sprintf(spf_buf_encoder, "L: %i, R: %i\r\n", left_motor_ticks, right_motor_ticks);
		bluetooth_transmit(spf_buf_encoder, len);
	}
}

void control_open() {
	GPIO_enableInt(INPUT_CTRL_SWITCH, GPIO_INT_BOTH_EDGES); // Enable interrupts
}

void control_init(){

	GPIOPinTypeGPIOInput(GPIO_PORTA_BASE, GPIO_PIN_1);
	GPIOPadConfigSet(GPIO_PORTA_BASE, GPIO_PIN_1, GPIO_STRENGTH_12MA, GPIO_PIN_TYPE_STD);

	time_keeper_init();
	pid_init(&side_pid, straight_control_params.kp, straight_control_params.ki, straight_control_params.kd, (float)get_curr_time_us());

	Semaphore_Params_init(&drive_straight_sem_params);
	drive_straight_sem_params.mode = Semaphore_Mode_BINARY;
	drive_straight_sem_handle = Semaphore_create(0, &drive_straight_sem_params, NULL);

	micromouse_state = RESET;
}

void set_pid_kp(char* val) {
	char buf[64];
	uint32_t val_int = atoi(val);
	straight_control_params.kp = val_int/100.0;
	pid_init(&side_pid, straight_control_params.kp, straight_control_params.ki, straight_control_params.kd, (float)get_curr_time_us());
	uint8_t len = sprintf(buf, "Straight PID KP set to: %3f\r\n", straight_control_params.kp);
	bluetooth_transmit(buf, len);
}

void set_pid_ki(char* val) {
	char buf[64];
	uint32_t val_int = atoi(val);
	straight_control_params.ki = val_int/100.0;
	pid_init(&side_pid, straight_control_params.kp, straight_control_params.ki, straight_control_params.kd, (float)get_curr_time_us());

	uint8_t len = sprintf(buf, "Straight PID KI set to: %3f\r\n", straight_control_params.ki);
	bluetooth_transmit(buf, len);
}

void set_pid_kd(char* val) {
	char buf[64];
	uint32_t val_int = atoi(val);
	straight_control_params.kd = val_int/100.0;
	pid_init(&side_pid, straight_control_params.kp, straight_control_params.ki, straight_control_params.kd, (float)get_curr_time_us());

	uint8_t len = sprintf(buf, "Straight PID KD set to: %3f\r\n", straight_control_params.kd);
	bluetooth_transmit(buf, len);
}

void set_motor_speed(char* val) {
	char buf[64];
	straight_control_params.motor_speed = atoi(val);
	update_motor(RIGHT_MOTOR, CCW, straight_control_params.motor_speed);
	update_motor(LEFT_MOTOR, CW, straight_control_params.motor_speed);
	uint8_t len = sprintf(buf, "Motors set to: %i\r\n", straight_control_params.motor_speed);
	bluetooth_transmit(buf, len);
}

void control_loop_resume(void){
	// Resume the task
	Semaphore_post(drive_straight_sem_handle);
}

void ctrlSwitchFxn(void) {

	if (micromouse_state == RESET){
		micromouse_state = START;
	}
	else{
		micromouse_state = RESET;
	}

	GPIOIntClear(GPIO_PORTA_BASE, GPIO_PIN_1);
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

void stream_motor(char* val) {
	if(strcmp(val, "on") == 0) {
		stream_buf_motor = true;
	} else {
		if(strcmp(val, "off") == 0) {
			stream_buf_motor = false;
		} else {
			bluetooth_transmit("Invalid Motor Stream Value! 'on' or 'off'\r\n", 36);
		}
	}
}

void stream_control(char* val) {
	if(strcmp(val, "on") == 0) {
		stream_buf_ctl = true;
	} else {
		if(strcmp(val, "off") == 0) {
			stream_buf_ctl = false;
		} else {
			bluetooth_transmit("Invalid Control Stream Value! 'on' or 'off'\r\n", 36);
		}
	}
}

void move_delay_tog(char* val){
	delay_on ^= 1;
}
