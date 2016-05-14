#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main ()
{
	printf("此程序2秒吃掉100mb記憶體，請勿執行過久\n");//只有visual studio上有效果 
	while(1)
	{
		void *p=malloc(1024*1024*1024);   //每兩秒要一塊100mb的記憶體大小
		p=NULL;//當指針消亡或發生變化，對應的內存不會被釋放  
		free(p);
		Sleep(2000);
	}
	
	
	
	
	
}
