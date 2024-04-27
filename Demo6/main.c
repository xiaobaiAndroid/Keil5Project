#include <REGX52.H>
#include "delay.h"

//数码晶体管显示的值： 0，1， 2， 3， 4， 5， 6， 7， 8，9
unsigned char NixieTable[] = {0x3F, 0x6,0x5B,0x4F,0x66,0x6D,0x7D, 0x07,0x7F,0x6F};

//数码管显示函数
void Nixie(unsigned char Location, Number){
	switch(Location){
		case 1: P2_4 = 1; P2_3 = 1; P2_2 = 1; break;
		case 2: P2_4 = 1; P2_3 = 1; P2_2 = 0; break;
	}
	
	P0 = NixieTable[Number];

}

void main(){
	
	while(1){
		Nixie(2,0);
		Delay1ms(1000);
		
			Nixie(2,1);
		Delay1ms(1000);
		
			Nixie(2,2);
		Delay1ms(1000);
			Nixie(2,3);
		Delay1ms(1000);
			Nixie(2,4);
		Delay1ms(1000);
			Nixie(2,5);
		Delay1ms(1000);
			Nixie(2,6);
		Delay1ms(1000);
			Nixie(2,7);
		Delay1ms(1000);
		
			Nixie(2,8);
		Delay1ms(1000);
		
			Nixie(2,9);
		Delay1ms(1000);
	};
}