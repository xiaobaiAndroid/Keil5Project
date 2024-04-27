#include <REGX52.H>


void Delay1ms(unsigned int num)	//@12.000MHz
{
	unsigned char data i, j;

	while(num){
				i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	
		num--;
	}
}

void main(){
	
	while(1){
		
		if(P3_1 == 0){
				//软件消除按键抖动
				Delay1ms(20);
				while(P3_1 == 0);
				Delay1ms(20);
				
				P2_0 = ~P2_0;
		}
	
	}
}

