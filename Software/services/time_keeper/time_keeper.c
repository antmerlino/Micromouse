#include "time_keeper.h"

#include <ti/sysbios/family/arm/lm4/Timer.h>

Timer_Struct time_keeper_timer;
Timer_Params time_keeper_params;

static sys_time_t curr_time = {0,0,0,0};

//Function definitions
void timer_update (UArg inc_usec);

void init_time_keeper(void) {
	// Create a timer that this module will use
	Timer_Params_init(&time_keeper_params);
	time_keeper_params.arg = (UArg)MICROSECONDS_PER_UPDATE;
	time_keeper_params.period = MICROSECONDS_PER_UPDATE;
	Timer_construct(&time_keeper_timer, Timer_ANY, timer_update, &time_keeper_params, NULL);
}

void get_current_time(sys_time_handle time_handle) {
	time_handle->hours = curr_time.hours;
	time_handle->minutes = curr_time.minutes;
	time_handle->seconds = curr_time.seconds;
	time_handle->uSec = curr_time.uSec;
}

uint64_t get_time_lapsed_us(sys_time_handle time2_handle, sys_time_handle time1_handle) {
	uint64_t time1_time_us = 1000000 * (60 * (60 * time1_handle->hours + time1_handle->minutes) + time1_handle->seconds) + time1_handle->uSec;
	uint64_t time2_time_us = 1000000 * (60 * (60 * time2_handle->hours + time2_handle->minutes) + time2_handle->seconds) + time2_handle->uSec;
	return time2_time_us - time1_time_us;
}

// Timer Interrupt Service Routine
void timer_update (UArg inc_usec) {
	if(curr_time.uSec + inc_usec < 1000000) {
		curr_time.uSec += inc_usec;
	}
	else { // uSeconds are rolling over, increment seconds
		curr_time.uSec = (curr_time.uSec + inc_usec) - 1000000;
		if(curr_time.seconds + 1 < 60){
			curr_time.seconds++;
		}
		else { // seconds are rolling over, increment minutes
			curr_time.seconds = 0;
			if(curr_time.minutes + 1 < 60){
				curr_time.minutes++;
			}
			else { // minutes are rolling over, increment hours
				curr_time.minutes = 0;
				curr_time.hours++;
			}
		}
	}
}
