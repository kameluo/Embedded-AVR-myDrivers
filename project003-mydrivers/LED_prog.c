/*
 * LED_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: smart
 */
#include "STD_TYPES.h"
#include "DIO_config.h"
#include "DIO_int.h"
#include "LED_priv.h"
#include "LED_config.h"
#include "LED_int.h"

void LED_voidSetLedOn(void){
	if(LED_u8_MODE == LED_u8_FORWARD){
		DIO_u8_voidSetPinValue(LED_0_u8_DIO_PIN, DIO_u8_HIGH);
		DIO_u8_voidSetPinValue(LED_1_u8_DIO_PIN, DIO_u8_HIGH);
		DIO_u8_voidSetPinValue(LED_2_u8_DIO_PIN, DIO_u8_HIGH);
		DIO_u8_voidSetPinValue(LED_3_u8_DIO_PIN, DIO_u8_HIGH);
	}else{
		DIO_u8_voidSetPinValue(LED_0_u8_DIO_PIN, DIO_u8_LOW);
		DIO_u8_voidSetPinValue(LED_1_u8_DIO_PIN, DIO_u8_LOW);
		DIO_u8_voidSetPinValue(LED_2_u8_DIO_PIN, DIO_u8_LOW);
		DIO_u8_voidSetPinValue(LED_3_u8_DIO_PIN, DIO_u8_LOW);
	}
}

void LED_voidSetLedOff(void){
	if(LED_u8_MODE == LED_u8_FORWARD){
		DIO_u8_voidSetPinValue(LED_0_u8_DIO_PIN, DIO_u8_LOW);
		DIO_u8_voidSetPinValue(LED_1_u8_DIO_PIN, DIO_u8_LOW);
		DIO_u8_voidSetPinValue(LED_2_u8_DIO_PIN, DIO_u8_LOW);
		DIO_u8_voidSetPinValue(LED_3_u8_DIO_PIN, DIO_u8_LOW);
	}else{
		DIO_u8_voidSetPinValue(LED_0_u8_DIO_PIN, DIO_u8_HIGH);
		DIO_u8_voidSetPinValue(LED_1_u8_DIO_PIN, DIO_u8_HIGH);
		DIO_u8_voidSetPinValue(LED_2_u8_DIO_PIN, DIO_u8_HIGH);
		DIO_u8_voidSetPinValue(LED_3_u8_DIO_PIN, DIO_u8_HIGH);
	}
}

void LED_voidSetLedOnWithIndex(u8 u8_LedIndex){
	if(LED_u8_GET_MODE(u8_LedIndex) == LED_u8_FORWARD){
		DIO_u8_voidSetPinValue(u8_LedIndex, DIO_u8_HIGH);
	}else{
		DIO_u8_voidSetPinValue(u8_LedIndex, DIO_u8_LOW);
	}
}
void LED_voidSetLedOffWithIndex(u8 u8_LedIndex){
	if(LED_u8_GET_MODE(u8_LedIndex) == LED_u8_FORWARD){
		DIO_u8_voidSetPinValue(u8_LedIndex, DIO_u8_LOW);
	}else{
		DIO_u8_voidSetPinValue(u8_LedIndex, DIO_u8_HIGH);
	}
}


