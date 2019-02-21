/*
 * LCD_prog.c

 *
 *  Created on: Feb 20, 2019
 *      Author: Kamel
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "avr/delay.h"

#include "DIO_int.h"

#include "LCD_priv.h"
#include "LCD_config.h"
#include "LCD_init.h"

void LCD_initalization(void){
	_delay_ms(52);
	LCD_writeCommand(0b00111100);  //0b0011NF00
	_delay_ms(1);
	LCD_writeCommand(0b00001100);  //0b00001DCB
	_delay_ms(1);
	LCD_writeCommand(0b00000001);
	_delay_ms(1);

}

void LCD_writeCommand(u8 command){
	DIO_u8_voidSetPinValue(LCD_RS_PIN, DIO_u8_LOW);
	execute(command);
}

void LCD_writeData(u8 data){
	DIO_u8_voidSetPinValue(LCD_RS_PIN, DIO_u8_HIGH);
	execute(data);
}

static void execute(u8 commandORData){

	DIO_u8_voidSetPinValue(LCD_RW_PIN, DIO_u8_LOW);
	if(GETBIT(commandORData, 0)==0){
		DIO_u8_voidSetPinValue(LCD_DATA_PIN_0, DIO_u8_LOW);
	}else{
		DIO_u8_voidSetPinValue(LCD_DATA_PIN_0, DIO_u8_HIGH);
	}

	if(GETBIT(commandORData, 1)==0){
			DIO_u8_voidSetPinValue(LCD_DATA_PIN_1, DIO_u8_LOW);
	}else{
			DIO_u8_voidSetPinValue(LCD_DATA_PIN_1, DIO_u8_HIGH);
	}

	if(GETBIT(commandORData, 2)==0){
			DIO_u8_voidSetPinValue(LCD_DATA_PIN_2, DIO_u8_LOW);
	}else{
			DIO_u8_voidSetPinValue(LCD_DATA_PIN_2, DIO_u8_HIGH);
	}

	if(GETBIT(commandORData, 3)==0){
			DIO_u8_voidSetPinValue(LCD_DATA_PIN_3, DIO_u8_LOW);
	}else{
			DIO_u8_voidSetPinValue(LCD_DATA_PIN_3, DIO_u8_HIGH);
	}

	if(GETBIT(commandORData, 4)==0){
			DIO_u8_voidSetPinValue(LCD_DATA_PIN_4, DIO_u8_LOW);
	}else{
			DIO_u8_voidSetPinValue(LCD_DATA_PIN_4, DIO_u8_HIGH);
	}

	if(GETBIT(commandORData, 5)==0){
				DIO_u8_voidSetPinValue(LCD_DATA_PIN_5, DIO_u8_LOW);
	}else{
				DIO_u8_voidSetPinValue(LCD_DATA_PIN_5, DIO_u8_HIGH);
	}

	if(GETBIT(commandORData, 6)==0){
				DIO_u8_voidSetPinValue(LCD_DATA_PIN_6, DIO_u8_LOW);
	}else{
				DIO_u8_voidSetPinValue(LCD_DATA_PIN_6, DIO_u8_HIGH);
	}

	if(GETBIT(commandORData, 7)==0){
				DIO_u8_voidSetPinValue(LCD_DATA_PIN_7, DIO_u8_LOW);
	}else{
				DIO_u8_voidSetPinValue(LCD_DATA_PIN_7, DIO_u8_HIGH);
	}
	DIO_u8_voidSetPinValue(LCD_Enable_PIN, DIO_u8_HIGH);
	_delay_ms(2);
	DIO_u8_voidSetPinValue(LCD_Enable_PIN, DIO_u8_LOW);
	_delay_ms(2);
}

void LCD_writeDataString(u8 dataString[]){
	int counter=0;
	while(dataString[counter]!='\0')
	{
		LCD_writeData(dataString[counter]);
		counter++;
	}
}

void LCD_clear(void){
	LCD_writeCommand(0b00000001);
}

void LCD_goToXY(u8 x,u8 y){
	if(x==0){
		LCD_writeCommand(y|0x80);
	}else{
		LCD_writeCommand((y+0x40)|0x80);
	}
}

