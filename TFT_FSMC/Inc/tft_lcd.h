#ifndef _TFT_LCD_H_
#define _TFT_LCD_H_

#include "main.h"

typedef struct{
	volatile uint16_t LCD_REG;
	volatile uint16_t LCD_RAM;
}LCD_TypeDef;

typedef struct{
	uint16_t width;
	uint16_t height;
	uint16_t id;
	uint16_t dir;//横屏还是竖屏
	uint16_t wramcmd;//开始写GRAM指令
	uint16_t setxcmd;
	uint16_t setycmd;
}_lcd_dev;

#define		LCD_BASE		((uint32_t)(0x6C000000|0x0000007E))
#define 	LCD					((LCD_TypeDef*)(LCD_BASE))

void LCD_WR_REG(volatile uint16_t regval);
uint16_t LCD_RD_DATA(void);

#endif

