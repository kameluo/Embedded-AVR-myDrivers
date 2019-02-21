/*
 * DIO_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Kamel
 */

/* the order of the libraries is so important,first we start with the data type library "STD_TYPE" */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "avr/io.h"
/* the config file depends on the private file, so we will put the private file first */
#include "DIO_priv.h"
#include "DIO_config.h"
/* and the int file is the last one because it depends on all the previous files */
#include "DIO_int.h"

/* grouping every 8 pins values of each port of the 4 ports in one variable by using the "CONCBIT" function-ex: 0b 0000 1111 */
#define DIO_GROUPA_DIRECTION CONCBIT(DIO_u8_PIN_DIR_7, DIO_u8_PIN_DIR_6, DIO_u8_PIN_DIR_5, DIO_u8_PIN_DIR_4, DIO_u8_PIN_DIR_3, DIO_u8_PIN_DIR_2, DIO_u8_PIN_DIR_1, DIO_u8_PIN_DIR_0)
#define DIO_GROUPB_DIRECTION CONCBIT(DIO_u8_PIN_DIR_15, DIO_u8_PIN_DIR_14, DIO_u8_PIN_DIR_13, DIO_u8_PIN_DIR_12, DIO_u8_PIN_DIR_11, DIO_u8_PIN_DIR_10, DIO_u8_PIN_DIR_9, DIO_u8_PIN_DIR_8)
#define DIO_GROUPC_DIRECTION CONCBIT(DIO_u8_PIN_DIR_23, DIO_u8_PIN_DIR_22, DIO_u8_PIN_DIR_21, DIO_u8_PIN_DIR_20, DIO_u8_PIN_DIR_19, DIO_u8_PIN_DIR_18, DIO_u8_PIN_DIR_17, DIO_u8_PIN_DIR_16)
#define DIO_GROUPD_DIRECTION CONCBIT(DIO_u8_PIN_DIR_31, DIO_u8_PIN_DIR_30, DIO_u8_PIN_DIR_29, DIO_u8_PIN_DIR_28, DIO_u8_PIN_DIR_27, DIO_u8_PIN_DIR_26, DIO_u8_PIN_DIR_25, DIO_u8_PIN_DIR_24)

/* the initialization function to get the hexadecimal number of each port in the AVR-to know which pins are inputs and outputs */
void DIO_voidInitalization(void)
{
	DDRA = DIO_GROUPA_DIRECTION;
	DDRB = DIO_GROUPB_DIRECTION;
	DDRC = DIO_GROUPC_DIRECTION;
	DDRD = DIO_GROUPD_DIRECTION;
}
/* setting a specific pin a value "high or low" by using the index of the pin in the AVR */
void DIO_u8_voidSetPinValue(u8 pinIndex, u8 pinValue){
	if((pinIndex >= DIO_u8_PORTA_START) && (pinIndex <= DIO_u8_PORTA_END)){
		if(pinValue == DIO_u8_HIGH){
			SETBIT(PORTA, pinIndex);
		}else{
			CLRBIT(PORTA, pinIndex);
		}
	}else if((pinIndex >= DIO_u8_PORTB_START) && (pinIndex <= DIO_u8_PORTB_END)){
		pinIndex -= DIO_u8_PORTA_SIZE;
		if(pinValue == DIO_u8_HIGH){
			SETBIT(PORTB, pinIndex);
		}else{
			CLRBIT(PORTB, pinIndex);
		}
	}else if((pinIndex >= DIO_u8_PORTC_START) && (pinIndex <= DIO_u8_PORTC_END)){
		pinIndex -= (DIO_u8_PORTA_SIZE + DIO_u8_PORTB_SIZE);
		if(pinValue == DIO_u8_HIGH){
			SETBIT(PORTC, pinIndex);
		}else{
			CLRBIT(PORTC, pinIndex);
		}
	}else if((pinIndex >= DIO_u8_PORTD_START) && (pinIndex <= DIO_u8_PORTD_END)){
		pinIndex -= (DIO_u8_PORTA_SIZE + DIO_u8_PORTB_SIZE + DIO_u8_PORTC_SIZE);
		if(pinValue == DIO_u8_HIGH){
			SETBIT(PORTD, pinIndex);
		}else{
			CLRBIT(PORTD, pinIndex);
		}
	}
}
/* getting the value of specific pin in the AVR "high or low" by using the index of the pin in the AVR */
u8 DIO_u8_GetValue(u8 pinIndex){
	u8 local_u8Result;
	if((pinIndex >= DIO_u8_PORTA_START) && (pinIndex <= DIO_u8_PORTA_END)){
		if(GETBIT(PINA, pinIndex)){
			local_u8Result = DIO_u8_HIGH;
		}else{
			local_u8Result = DIO_u8_LOW;
		}
	}else if((pinIndex >= DIO_u8_PORTB_START) && (pinIndex <= DIO_u8_PORTB_END)){
		pinIndex -= DIO_u8_PORTA_SIZE;
		if(GETBIT(PINB, pinIndex)){
			local_u8Result = DIO_u8_HIGH;
		}else{
			local_u8Result = DIO_u8_LOW;
		}
	}else if((pinIndex >= DIO_u8_PORTC_START) && (pinIndex <= DIO_u8_PORTC_END)){
		pinIndex -= (DIO_u8_PORTA_SIZE + DIO_u8_PORTB_SIZE);
		if(GETBIT(PINC, pinIndex)){
			local_u8Result = DIO_u8_HIGH;
		}else{
			local_u8Result = DIO_u8_LOW;
		}
	}else if((pinIndex >= DIO_u8_PORTD_START) && (pinIndex <= DIO_u8_PORTD_END)){
		pinIndex -= (DIO_u8_PORTA_SIZE + DIO_u8_PORTB_SIZE + DIO_u8_PORTC_SIZE);
		if(GETBIT(PIND, pinIndex)){
			local_u8Result = DIO_u8_HIGH;
		}else{
			local_u8Result = DIO_u8_LOW;
		}
	}
	return local_u8Result;
}

