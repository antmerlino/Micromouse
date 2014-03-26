#ifndef IR_ADC_SENSOR_H
#define IR_ADC_SENSOR_H


#define RB_OFFSET 220
#define LB_OFFSET -27
#define RF_OFFSET 1
#define LF_OFFSET 102

typedef union {

	uint32_t adc_data[6];

	struct{
		uint32_t left_front;
		uint32_t right_back;
		uint32_t right_front;
		uint32_t left_back;
		uint32_t junk1;
		uint32_t junk2;
	};

} side_ir_data_t;


void ir_sensor_init(void);
void side_poll(side_ir_data_t * side_ir_data);
void side_poll_resume(void);
void update_ir_duty(char * value);

// UART Callback
void stream_ir(char* val);

#endif
