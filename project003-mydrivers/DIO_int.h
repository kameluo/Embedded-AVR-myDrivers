/*
 * DIO_int.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Kamel
 */
/* to avoid calling "redefinition" that file more than one time we use "ifndef" and "def"
 * to define it one and we can write the name that we want as it is considered
 * as what is we called, like in that case "DIO_INT_H" and the code of that file
 * considered as it is related to the name we call it "DIO_INT_H" */
#ifndef DIO_INT_H
#define DIO_INT_H

/* the modes of the pins of the AVR */
#define DIO_u8_HIGH 1
#define DIO_u8_LOW 0


/* setting the pin index to the pin number in the AVR */
#define DIO_u8_PIN_0 0
#define DIO_u8_PIN_1 1
#define DIO_u8_PIN_2 2
#define DIO_u8_PIN_3 3
#define DIO_u8_PIN_4 4
#define DIO_u8_PIN_5 5
#define DIO_u8_PIN_6 6
#define DIO_u8_PIN_7 7
#define DIO_u8_PIN_8 8
#define DIO_u8_PIN_9 9
#define DIO_u8_PIN_10 10
#define DIO_u8_PIN_11 11
#define DIO_u8_PIN_12 12
#define DIO_u8_PIN_13 13
#define DIO_u8_PIN_14 14
#define DIO_u8_PIN_15 15
#define DIO_u8_PIN_16 16
#define DIO_u8_PIN_17 17
#define DIO_u8_PIN_18 18
#define DIO_u8_PIN_19 19
#define DIO_u8_PIN_20 20
#define DIO_u8_PIN_21 21
#define DIO_u8_PIN_22 22
#define DIO_u8_PIN_23 23
#define DIO_u8_PIN_24 24
#define DIO_u8_PIN_25 25
#define DIO_u8_PIN_26 26
#define DIO_u8_PIN_27 27
#define DIO_u8_PIN_28 28
#define DIO_u8_PIN_29 29
#define DIO_u8_PIN_30 30
#define DIO_u8_PIN_31 31


/* DIO initialization function */
void DIO_voidInitalization(void);

/* SET Pin Value in the AVR */
void DIO_u8_voidSetPinValue(u8 pinIndex, u8 pinValue);

/* GET Pin Value from the AVR */
u8 DIO_u8_GetValue(u8 pinIndex);

#endif//DIO_INT_H
