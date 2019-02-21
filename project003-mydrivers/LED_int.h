/*
 * LED_int.h

 *
 *  Created on: ??þ/??þ/????
 *      Author: Kamel
 */
/* to avoid calling "redefinition" that file more than one time we use "ifndef" and "def"
 * to define it one and we can write the name that we want as it is considered
 * as what is we called, like in that case "LED_INT_H" and the code of that file
 * considered as it is related to the name we call it "LED_INT_H" */
#ifndef LED_INT_H
#define LED_INT_H

/* macro-function to check the mode of every single led can be able connected to any pin in the kit */
#define LED_u8_GET_MODE(LED_u8_Index_0) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_1) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_2) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_3) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_4) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_5) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_6) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_7) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_8) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_9) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_10) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_11) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_12) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_13) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_14) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_15) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_16) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_17) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_18) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_19) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_20) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_21) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_22) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_23) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_24) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_25) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_26) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_27) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_28) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_29) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_30) LED_u8_FORWARD
#define LED_u8_GET_MODE(LED_u8_Index_31) LED_u8_FORWARD

/* switching on the defined the 4 leds */
void LED_voidSetLedOn(void);

/* switching off the defined the 4 leds */
void LED_voidSetLedOff(void);

/* switching on a specific the led */
void LED_voidSetLedOnWithIndex(u8 u8_LedIndex);

/* switching off a specific the led */
void LED_voidSetLedOffWithIndex(u8 u8_LedIndex);

#endif//LED_INT_H
