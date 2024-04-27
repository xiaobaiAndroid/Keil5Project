#include <REGX52.H>
#include "MatrixKey.h"
#include "LCD1602.h"

int num;

void main(){
	
    	LCD_Init();							//LCD初始化
	LCD_ShowString(1,1,"MatrixKey:");	//LCD显示数字
    while (1)
    {
         num = matrixKey();
			if(num != -1){
			    LCD_ShowHexNum(2,1,num,2);
			}
    
    }
    
}
