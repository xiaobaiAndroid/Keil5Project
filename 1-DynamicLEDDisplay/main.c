#include <REGX52.H>


//数码管段码表

/*
     a
     _
   f|_|b
   e|_|c .g
     d
*/  

//      .gfe dcba  显示的数字
//0x3F  0011 1111  0
//      0000 0110  1
unsigned char NixieTable[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

//延时子函数
void Delay(unsigned int time)
{
	unsigned char i, j;
	while(time--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}

void main(){
   

}

