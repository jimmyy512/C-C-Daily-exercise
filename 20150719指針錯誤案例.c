#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i=10;
	int *p=NULL;   //指針尚未初始化，指向隨機的地址 所以會出錯 
//	p=&i;
	printf("%p",p);
//	*p=i;
//	printf("%d",*p);
	
}
