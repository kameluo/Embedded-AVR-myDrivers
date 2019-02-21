/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: smart
 */

/* example for flashing the 4 leds on the kit-change the file name to main.c to run it on the microcontroller */
#include "avr/io.h"
#include "avr/delay.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_config.h"
#include "DIO_int.h"
#include "GIE_int.h"
#include "UART_init.h"

#include "EXTI_int.h"
#include "EXTI_config.h"

#include "LED_config.h"
#include "LED_int.h"
#include "TIM0_int.h"

//int counter=0,flag=0;
void main(void){
	DIO_voidInitalization();
	//GIE_voidEnable();
	UART_voidInit();

	DIO_u8_voidSetPinValue(DIO_u8_PIN_0,DIO_u8_HIGH);
	DIO_u8_voidSetPinValue(DIO_u8_PIN_1,DIO_u8_LOW);

	u8 message;

	while(1){
		message=UART_voidReceive();
		if(message=='0'){
			DIO_u8_voidSetPinValue(DIO_u8_PIN_2,DIO_u8_HIGH);
		}else if(message=='1'){
			DIO_u8_voidSetPinValue(DIO_u8_PIN_2,DIO_u8_LOW);
		}
	}
}


