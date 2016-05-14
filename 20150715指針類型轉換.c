#include <stdio.h>
#include <stdlib.h>
int main ()
{
	
	int a=10;
	int b=20;
	printf("%p , %p\n",&a,&b);
	int *p;
	int x;
	scanf("%x",&x);//輸入16進位制的整數 
//	printf("x=%d\n",x);
	p=(int *)x;//將地址轉換成指針 不加int *會出現警告 
	*p=3;
	printf("%d,%d",a,b);
}
