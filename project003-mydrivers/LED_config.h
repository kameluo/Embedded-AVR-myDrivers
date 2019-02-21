/*
 * LED_config.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Kamel
 */
/* to avoid calling "redefinition" that file more than one time we use "ifndef" and "def"
 * to define it one and we can write the name that we want as it is considered
 * as what is we called, like in that case "LED_CONFIG_H" and the code of that file
 * considered as it is related to the name we call it "LED_CONFIG_H" */
#ifndef LED_CONFIG_H
#define LED_CONFIG_H

/* defining the pins connected to the four leds we have in the kit */
#define LED_0_u8_DIO_PIN DIO_u8_PIN_0
#define LED_1_u8_DIO_PIN DIO_u8_PIN_1
#define LED_2_u8_DIO_PIN DIO_u8_PIN_2
#define LED_3_u8_DIO_PIN DIO_u8_PIN_3

/* the leds connection in the kit */
#define LED_u8_MODE LED_u8_FORWARD

/* incase if we want to connect any led to any pin in the kit */
#define LED_u8_Index_0 DIO_u8_PIN_0
#define LED_u8_Index_1 DIO_u8_PIN_1
#define LED_u8_Index_2 DIO_u8_PIN_2
#define LED_u8_Index_3 DIO_u8_PIN_3
#define LED_u8_Index_4 DIO_u8_PIN_4
#define LED_u8_Index_5 DIO_u8_PIN_5
#define LED_u8_Index_6 DIO_u8_PIN_6
#define LED_u8_Index_7 DIO_u8_PIN_7
#define LED_u8_Index_8 DIO_u8_PIN_8
#define LED_u8_Index_9 DIO_u8_PIN_9
#define LED_u8_Index_10 DIO_u8_PIN_10
#define LED_u8_Index_11 DIO_u8_PIN_11
#define LED_u8_Index_12 DIO_u8_PIN_12
#define LED_u8_Index_13 DIO_u8_PIN_13
#define LED_u8_Index_14 DIO_u8_PIN_14
#define LED_u8_Index_15 DIO_u8_PIN_15
#define LED_u8_Index_16 DIO_u8_PIN_16
#define LED_u8_Index_17 DIO_u8_PIN_17
#define LED_u8_Index_18 DIO_u8_PIN_18
#define LED_u8_Index_19 DIO_u8_PIN_19
#define LED_u8_Index_20 DIO_u8_PIN_20
#define LED_u8_Index_21 DIO_u8_PIN_21
#define LED_u8_Index_22 DIO_u8_PIN_22
#define LED_u8_Index_23 DIO_u8_PIN_23
#define LED_u8_Index_24 DIO_u8_PIN_24
#define LED_u8_Index_25 DIO_u8_PIN_25
#define LED_u8_Index_26 DIO_u8_PIN_26
#define LED_u8_Index_27 DIO_u8_PIN_27
#define LED_u8_Index_28 DIO_u8_PIN_28
#define LED_u8_Index_29 DIO_u8_PIN_29
#define LED_u8_Index_30 DIO_u8_PIN_30
#define LED_u8_Index_31 DIO_u8_PIN_31

#endif//LED_CONFIG_H
