
#include "delay.h"

void Delay1ms(int ms)	//@12.000MHz
{
	unsigned char data i, j;

	while(ms){
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		ms--;
	}

}

