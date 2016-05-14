//階乘(factorial)
// 1*2*3*4*5
//go(1)=1,go(2)=1*2,go(3)=1*2*3   //終止條件 ,go(1)=1(最後一個) 
//go(n)=go(n-1)*n  //循環要素 第n個依賴著n-1個
//go(5)=go(4)*5=go(3)*4*5=go(2)*3*4*5=go(1)*2*3*4*5
#include <stdio.h>
#include <stdlib.h>
int go(int n)
{
	if (n==1)return 1;		//終止條件 ,go(1)=1(最後一個) 
	else return go(n-1)*n;	//循環要素 第n個依賴著n-1個
}
void main (void)
{
	printf("%d",go(5));
}
