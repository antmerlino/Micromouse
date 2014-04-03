/*
 * encoder.h
 *
 *  Created on: Mar 22, 2014
 *      Author: Anthony
 */

#ifndef ENCODER_H_
#define ENCODER_H_

#define ENCODER_MAX_LOW 400
#define ENCODER_MAX_HIGH 1600

typedef struct {
	uint32_t right;
	uint32_t left;
	uint8_t blocks;
} encoder_data_t;

extern encoder_data_t encoders;

void encoder_init();
void left_encoder_count();
void right_encoder_count();
void check_distance();
void stream_encoder(char* val);
void get_xdiff();


#endif /* ENCODER_H_ */
