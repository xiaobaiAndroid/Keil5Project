#include <REGX52.H>
#include "LCD1602.h"
#include "delay.h"

void main()
{

	while (1)
	{
		// LCD_Init();
		// LCD_ShowChar(1, 1, 'A');
		// Delay1ms(2000);
		LCD_Init();
		LCD_ShowString(2, 1, "Pig");

		Delay1ms(2000);
		LCD_Init();
		LCD_ShowString(1, 1, "I Love You");
		Delay1ms(2000);

		Delay1ms(2000);
		LCD_Init();
		LCD_ShowNum(2, 1, 100, 3);
		Delay1ms(2000);

		// LCD_ShowBinNum(1, 1, 1000, 16);
		// LCD_Init();
		// Delay1ms(2000);
	}
}