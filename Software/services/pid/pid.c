#include "pid.h"

void init_pwm_controller(pid_controller_handle pid_handle, float kp, float ki, float kd, float curr_time_us) {

	pid_handle->kp = kp;
	pid_handle->ki = ki;
	pid_handle->kd = kd;
	pid_handle->prev_time_us = curr_time_us;
	pid_handle->accum_error = 0;
	pid_handle->prev_error = 0;
}

float calc_pid_out(pid_controller_handle pid_handle, float stpt, float meas, float curr_time_us) {

	// Calculate error
	float curr_error = stpt-meas;

	// Find new dt
	float dt = (curr_time_us - pid_handle->prev_time_us)/1000000;

	// Calculate Proportional Term
	float P = pid_handle->kp*curr_error;

	// Calculate Integral Term
	pid_handle->accum_error += curr_error*dt;
	float I = pid_handle->ki*pid_handle->accum_error;

	// Calculate Derivitive Term
	float D = (curr_error-pid_handle->prev_error)/dt;

	// Update struct
	pid_handle->prev_error = curr_error;
	pid_handle->prev_time_us = curr_time_us;

	return (P+I+D);
}
