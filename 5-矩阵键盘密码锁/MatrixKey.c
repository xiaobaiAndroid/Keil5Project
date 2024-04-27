#include "Delay.h"
#include <REGX52.H>

int number;

//矩阵键盘
int matrixKey()
{

    P1 = 0xFF;

    number = -1;

    // // 扫描第一行
    P1_7 = 0;
		//判断是否按下矩阵按键S1
    if (P1_3 == 0)
    {
        Delay1ms(20);
        while (P1_3 == 0);
        Delay1ms(20);
        number = 0;
    }
			//判断是否按下矩阵按键S2
    if (P1_2 == 0)
    {
        Delay1ms(20);
        while (P1_2 == 0)
            ;
        Delay1ms(20);
        number = 1;
    }
				//判断是否按下矩阵按键S3
    if (P1_1 == 0)
    {
        Delay1ms(20);
        while (P1_1 == 0)
            ;
        Delay1ms(20);
        number = 2;
    }
		
				//判断是否按下矩阵按键S4
    if (P1_0 == 0)
    {
        Delay1ms(20);
        while (P1_0 == 0)
            ;
        Delay1ms(20);
        number = 3;
    }

    // 扫描第二行
    P1 = 0xFF;
    P1_6 = 0;
				//判断是否按下矩阵按键S5
    if (P1_3 == 0)
    {
        Delay1ms(20);
        while (P1_3 == 0)
            ;
        Delay1ms(20);
        number = 4;
    }
		
				//判断是否按下矩阵按键S6
    if (P1_2 == 0)
    {
        Delay1ms(20);
        while (P1_2 == 0)
            ;
        Delay1ms(20);
        number = 5;
    }
		
				//判断是否按下矩阵按键S7
    if (P1_1 == 0)
    {
        Delay1ms(20);
        while (P1_1 == 0)
            ;
        Delay1ms(20);
        number = 6;
    }
				//判断是否按下矩阵按键S8
    if (P1_0 == 0)
    {
        Delay1ms(20);
        while (P1_0 == 0)
            ;
        Delay1ms(20);
        number = 7;
    }

    // 扫描第三行
    P1 = 0xFF;
    P1_5 = 0;
		//判断是否按下矩阵按键S9
    if (P1_3 == 0)
    {
        Delay1ms(20);
        while (P1_3 == 0)
            ;
        Delay1ms(20);
        number = 8;
    }
				//判断是否按下矩阵按键S10
    if (P1_2 == 0)
    {
        Delay1ms(20);
        while (P1_2 == 0)
            ;
        Delay1ms(20);
        number = 9;
    }
				//判断是否按下矩阵按键S11
    if (P1_1 == 0)
    {
        Delay1ms(20);
        while (P1_1 == 0)
            ;
        Delay1ms(20);
        number = 10;
    }
				//判断是否按下矩阵按键S12
    if (P1_0 == 0)
    {
        Delay1ms(20);
        while (P1_0 == 0)
            ;
        Delay1ms(20);
        number = 11;
    }

    // 扫描第四行
    P1 = 0xFF;
    P1_4 = 0;
				//判断是否按下矩阵按键S13
    if (P1_3 == 0)
    {
        Delay1ms(20);
        while (P1_3 == 0)
            ;
        Delay1ms(20);
        number = 12;
    }
				//判断是否按下矩阵按键S14
    if (P1_2 == 0)
    {
        Delay1ms(20);
        while (P1_2 == 0)
            ;
        Delay1ms(20);
        number = 13;
    }
				//判断是否按下矩阵按键S15
    if (P1_1 == 0)
    {
        Delay1ms(20);
        while (P1_1 == 0)
            ;
        Delay1ms(20);
        number = 14;
    }
				//判断是否按下矩阵按键S16
    if (P1_0 == 0)
    {
        Delay1ms(20);
        while (P1_0 == 0)
            ;
        Delay1ms(20);
        number = 15;
    }

    return number;
}