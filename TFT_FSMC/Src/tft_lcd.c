#include "tft_lcd.h"

void LCD_WR_REG(volatile uint16_t regval)
{   
	regval=regval;		//使用-O2优化的时候,必须插入的延时
	LCD->LCD_REG=regval;//写入要写的寄存器序号	 
}

uint16_t LCD_RD_DATA(void)
{
	volatile uint16_t ram;			//防止被优化
	ram=LCD->LCD_RAM;	
	return ram;	 
}	
