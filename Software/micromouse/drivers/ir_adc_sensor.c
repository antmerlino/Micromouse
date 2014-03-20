#include <stdint.h>
#include <stdbool.h>
#include <inc/hw_memmap.h>
#include <driverlib/gpio.h>
#include <driverlib/pin_map.h>
#include <driverlib/adc.h>
#include <driverlib/sysctl.h>
#include <inc/hw_ints.h>

#include <ti/sysbios/family/arm/m3/Hwi.h>

#include "ir_adc_sensor.h"

ti_sysbios_family_arm_m3_Hwi_Struct ir_adc_hwi;
Hwi_Params ir_adc_hwi_params;
uint32_t pui32ADC0Value = 0;

void ir_adc_capt_isr(UArg arg1) {
	//
	// Clear the ADC interrupt flag.
	//
	ADCIntClear(ADC0_BASE, 3);
	//
	// Read ADC Value.
	//
	ADCSequenceDataGet(ADC0_BASE, 3, &pui32ADC0Value);
}


void ir_adc_sensor_init(void) {
	SysCtlPeripheralEnable( SYSCTL_PERIPH_ADC0 );

	GPIOPinTypeADC( GPIO_PORTB_BASE, GPIO_PIN_4);

	//
	// Enable sample sequence 3 with a processor signal trigger.  Sequence 3
	// will do a single sample when the processor sends a singal to start the
	// conversion.  Each ADC module has 4 programmable sequences, sequence 0
	// to sequence 3.  This example is arbitrarily using sequence 3.
	//
	ADCSequenceConfigure(ADC0_BASE, 3, ADC_TRIGGER_PROCESSOR, 0);

	// Set up Hardware Interrupt for ADC
	Hwi_Params_init(&ir_adc_hwi_params);
	//adc_hwi_params.arg = (UArg)adc_hwi;
	Hwi_construct(&ir_adc_hwi, INT_ADC0SS3, ir_adc_capt_isr, &ir_adc_hwi_params, NULL);
}

void ir_capture_adc(void) {

	// Disable Sequence/Interrupt so it can be reconfigured
	ADCSequenceDisable(ADC0_BASE, 3);
	ADCIntDisable(ADC0_BASE, 3);
	//
	// Configure step 0 on sequence 3.  Sample PB4 (ADC_CTL_CH10)
	// and configure the interrupt flag (ADC_CTL_IE) to be set
	// when the sample is done.  Tell the ADC logic that this is the last
	// conversion on sequence 3 (ADC_CTL_END).  Sequence 3 has only one
	// programmable step.  Sequence 1 and 2 have 4 steps, and sequence 0 has
	// 8 programmable steps.  Since we are only doing a single conversion using
	// sequence 3 we will only configure step 0.  For more information on the
	// ADC sequences and steps, reference the datasheet.
	//
	ADCSequenceStepConfigure(ADC0_BASE, 3, 0, ADC_CTL_CH10 | ADC_CTL_IE | ADC_CTL_END);

	//
	// Since sample sequence 3 is now configured, it must be enabled.
	//
	ADCSequenceEnable(ADC0_BASE, 3);

	//
	// Clear the interrupt status flag.  This is done to make sure the
	// interrupt flag is cleared before we sample.
	//
	ADCIntClear(ADC0_BASE, 3);
	ADCIntEnable(ADC0_BASE, 3);
	//
	// Trigger the ADC conversion.
	//
	ADCProcessorTrigger(ADC0_BASE, 3);

}
