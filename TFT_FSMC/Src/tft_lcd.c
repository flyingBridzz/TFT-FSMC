#include "tft_lcd.h"

void LCD_WR_REG(volatile uint16_t regval)
{   
	regval=regval;		//ʹ��-O2�Ż���ʱ��,����������ʱ
	LCD->LCD_REG=regval;//д��Ҫд�ļĴ������	 
}

uint16_t LCD_RD_DATA(void)
{
	volatile uint16_t ram;			//��ֹ���Ż�
	ram=LCD->LCD_RAM;	
	return ram;	 
}	
