/*
 * LCD_init.h
 *
 *  Created on: Feb 20, 2019
 *      Author: Kamel
 */

#ifndef LCD_INIT_H
#define LCD_INIT_H

void LCD_initalization(void);
void LCD_writeCommand(u8 command);
void LCD_writeData(u8 data);

void LCD_writeDataString(u8 dataString[]);

void LCD_clear(void);

void LCD_goToXY(u8 x,u8 y);

#endif
