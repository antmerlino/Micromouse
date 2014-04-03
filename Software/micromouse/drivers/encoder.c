/*
 * encoder.c
 *
 *  Created on: Mar 22, 2014
 *      Author: Anthony
 */

#include "stdbool.h"
#include "stdint.h"
#include <stdlib.h>
#include <stdio.h>

#include "driverlib/adc.h"
#include "driverlib/sysctl.h"
#include <driverlib/gpio.h>
#include "inc/hw_ints.h"
#include "inc/hw_types.h"
#include "inc/hw_gpio.h"
#include "inc/hw_memmap.h"

/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>

#include "drivers/bluetooth.h"
#include "drivers/led.h"

#include "services/control.h"

#include "encoder.h"

encoder_data_t encoders = {0, 0, 1};

ti_sysbios_family_arm_m3_Hwi_Struct left_encoder_hwi;
Hwi_Params left_encoder_hwi_params;

ti_sysbios_family_arm_m3_Hwi_Struct right_encoder_hwi;
Hwi_Params right_encoder_hwi_params;

uint32_t left_motor_ticks = 0;
uint32_t right_motor_ticks = 0;

void encoder_init(){

	SysCtlPeripheralEnable( SYSCTL_PERIPH_ADC0 );
	SysCtlPeripheralEnable( SYSCTL_PERIPH_ADC1 );

	// Select the analog ADC function for these pins.
	GPIOPinTypeADC( GPIO_PORTE_BASE, GPIO_PIN_0);	//CH3 - Right Encoder B
	GPIOPinTypeADC( GPIO_PORTE_BASE, GPIO_PIN_1);	//CH2 - Right Encoder A
	//GPIOPinTypeADC( GPIO_PORTE_BASE, GPIO_PIN_2);	//CH1 - Left Encoder B
	GPIOPinTypeADC( GPIO_PORTE_BASE, GPIO_PIN_3);	//CH0 - Left Encoder A

	/**
	 * Set up ADC1 sequence 1 for operation for the encoders
	 *
	 * Uses Comparator 0 and 1 to check for rising edge
	 *
	 * CH0 - PE3 - Left Encoder A
	 *
	 */
	ADCSequenceConfigure(ADC1_BASE, 0, ADC_TRIGGER_ALWAYS, 3);
	ADCSequenceStepConfigure(ADC1_BASE, 0, 0, ADC_CTL_CH0|ADC_CTL_CMP0);
	ADCSequenceStepConfigure(ADC1_BASE, 0, 1, ADC_CTL_CH0|ADC_CTL_END);
	ADCSequenceEnable(ADC1_BASE, 0);

	//Set up the comparator for Left Encoder A
	ADCComparatorConfigure(ADC1_BASE, 0, ADC_COMP_TRIG_NONE|ADC_COMP_INT_HIGH_HONCE );
	ADCComparatorRegionSet(ADC1_BASE, 0, ENCODER_MAX_LOW, ENCODER_MAX_HIGH);
	ADCComparatorReset(ADC1_BASE, 0, true, true);
	ADCComparatorIntEnable(ADC1_BASE, 0);

	// Set up Hardware Interrupt for ADC
	Hwi_Params_init(&left_encoder_hwi_params);
	//encoder_hwi_params.arg = (UArg)adc_hwi;
	Hwi_construct(&left_encoder_hwi, INT_ADC1SS0, left_encoder_count, &left_encoder_hwi_params, NULL);

	/**
	 * Set up ADC1 sequence 1 for operation for the encoders
	 *
	 * Uses Comparator 0 and 1 to check for rising edge
	 *
	 * CH2 - PE1 - Right Encoder A
	 *
	 */
	ADCSequenceConfigure(ADC0_BASE, 0, ADC_TRIGGER_ALWAYS, 3);
	ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH2|ADC_CTL_CMP0);
	ADCSequenceStepConfigure(ADC0_BASE, 0, 1, ADC_CTL_CH2|ADC_CTL_END);
	ADCSequenceEnable(ADC0_BASE, 0);

	//Set up the comparator for Right Encoder A
	ADCComparatorConfigure(ADC0_BASE, 0, ADC_COMP_TRIG_NONE|ADC_COMP_INT_HIGH_HONCE );
	ADCComparatorRegionSet(ADC0_BASE, 0, ENCODER_MAX_LOW, ENCODER_MAX_HIGH);
	ADCComparatorReset(ADC0_BASE, 0, true, true);
	ADCComparatorIntEnable(ADC0_BASE, 0);

	// Set up Hardware Interrupt for ADC
	Hwi_Params_init(&right_encoder_hwi_params);
	//encoder_hwi_params.arg = (UArg)adc_hwi;
	Hwi_construct(&right_encoder_hwi, INT_ADC0SS0, right_encoder_count, &right_encoder_hwi_params, NULL);

	encoders.left = 0;
	encoders.right = 0;
	encoders.blocks = 1;

}


void left_encoder_count(){

	ADCComparatorIntClear(ADC1_BASE, 0x0F);

	encoders.left++;

}

void right_encoder_count(){

	ADCComparatorIntClear(ADC0_BASE, 0x0F);

	encoders.right++;

}

