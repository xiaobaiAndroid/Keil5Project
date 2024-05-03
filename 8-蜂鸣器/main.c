#include <REGX52.H>

//因为要用到左右移函数，所以加入这个头文件
#include<intrins.h> 

typedef unsigned int u16;
typedef unsigned chat u8;

//蜂鸣器控制管脚直接连接到 51 单片, 机的 P1^5 IO 口上
//使用 sbit 关键字来定义 P1.5 管脚,定义好后即可使用 beep 来替代 P1.5口的操作
sbit beep  =P1^5;

void delay(u16 i){
  while(i--);

}

void main(){
  while(1){
    beep = ~beep;
    
    //延时一毫秒
    delay(100);
  }
}
