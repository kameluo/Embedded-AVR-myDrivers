/*
 * DIO_priv.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: KAMEL
 */
/* to avoid calling "redefinition" that file more than one time we use "ifndef" and "def"
 * to define it one and we can write the name that we want as it is considered
 * as what is we called, like in that case "DIO_PRIV_H" and the code of that file
 * considered as it is related to the name we call it "DIO_PRIV_H" */
#ifndef DIO_PRIV_H
#define DIO_PRIV_H

#define DIO_u8_OUTPUT 1
#define DIO_u8_INPUT 0

/* GROUP A LIMITS */
#define DIO_u8_PORTA_START 0
#define DIO_u8_PORTA_END 7
#define DIO_u8_PORTA_SIZE 8

/* GROUP A LIMITS */
#define DIO_u8_PORTB_START 8
#define DIO_u8_PORTB_END 15
#define DIO_u8_PORTB_SIZE 8

/* GROUP A LIMITS */
#define DIO_u8_PORTC_START 16
#define DIO_u8_PORTC_END 23
#define DIO_u8_PORTC_SIZE 8

/* GROUP A LIMITS */
#define DIO_u8_PORTD_START 24
#define DIO_u8_PORTD_END 31
#define DIO_u8_PORTD_SIZE 8

#endif//DIO_PRIV_H
