#include <REGX52.H>




//中断序号为0
void exint0() interrupt 0
{
	P2 = 0x55;
}	

void main(){
	// 指定为中断方式为外部中断，系统在INTx(x=0,1,2,3)脚探测到低电平后可产生外部中断
		IT0 = 1;
			//CPU允许中断
		EA = 1;
			//允许外部中断
		EX0 = 1;


		while(1);

}