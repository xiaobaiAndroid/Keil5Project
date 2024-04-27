#include <REGX52.H>
#include "MatrixKey.h"
#include "LCD1602.h"
#include "delay.h"

int keyNum;
unsigned int password;
unsigned int count;

void main()
{
    count = 0;
    password = 0;

    LCD_Init();
    LCD_ShowString(1, 1, "Input Password ");
    while (1)
    {
        keyNum = matrixKey();
        if (keyNum != -1)
        {
            if (keyNum < 10)
            {
                if (count < 4)
                {
                    // 左翼
                    password *= 10;
                    password += keyNum;
                    count++;
									 LCD_ShowNum(2, 1, password, 4);
                }
								
            }

            // 确认
            if (keyNum == 10)
            {
                if (count == 4)
                {
                    LCD_Init();
                    if (password == 1314)
                    {
                        LCD_ShowString(1, 1, "password correct");
                    }
                    else
                    {
                        LCD_ShowString(1, 1, "password error");
                    }
                    LCD_ShowNum(2, 1, password, 4);

                    Delay1ms(2000);
                    LCD_Init();
                    LCD_ShowString(1, 1, "Input Password ");

                    password = 0;
                    count = 0;
                }
            }
            else if (keyNum == 11)
            {
                // 取消
                LCD_Init();
                LCD_ShowString(1, 1, "Input Password ");

                password = 0;
                count = 0;
            }
        }
    }
}
