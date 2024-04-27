#include "Delay.h"
#include <REGX52.H>

int number;

int matrixKey()
{

    P1 = 0xFF;

    number = -1;

    // // 扫描第一行
    P1_7 = 0;
    if (P1_3 == 0)
    {
        Delay1ms(20);
        while (P1_3 == 0)
            ;
        Delay1ms(20);
        number = 0;
    }
    if (P1_2 == 0)
    {
        Delay1ms(20);
        while (P1_2 == 0)
            ;
        Delay1ms(20);
        number = 1;
    }
    if (P1_1 == 0)
    {
        Delay1ms(20);
        while (P1_1 == 0)
            ;
        Delay1ms(20);
        number = 2;
    }
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
    if (P1_3 == 0)
    {
        Delay1ms(20);
        while (P1_3 == 0)
            ;
        Delay1ms(20);
        number = 4;
    }
    if (P1_2 == 0)
    {
        Delay1ms(20);
        while (P1_2 == 0)
            ;
        Delay1ms(20);
        number = 5;
    }
    if (P1_1 == 0)
    {
        Delay1ms(20);
        while (P1_1 == 0)
            ;
        Delay1ms(20);
        number = 6;
    }
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

    if (P1_3 == 0)
    {
        Delay1ms(20);
        while (P1_3 == 0)
            ;
        Delay1ms(20);
        number = 8;
    }
    if (P1_2 == 0)
    {
        Delay1ms(20);
        while (P1_2 == 0)
            ;
        Delay1ms(20);
        number = 9;
    }
    if (P1_1 == 0)
    {
        Delay1ms(20);
        while (P1_1 == 0)
            ;
        Delay1ms(20);
        number = 10;
    }
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
    if (P1_3 == 0)
    {
        Delay1ms(20);
        while (P1_3 == 0)
            ;
        Delay1ms(20);
        number = 12;
    }
    if (P1_2 == 0)
    {
        Delay1ms(20);
        while (P1_2 == 0)
            ;
        Delay1ms(20);
        number = 13;
    }
    if (P1_1 == 0)
    {
        Delay1ms(20);
        while (P1_1 == 0)
            ;
        Delay1ms(20);
        number = 14;
    }
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