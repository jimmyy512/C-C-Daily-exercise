#include <stdio.h>
#include <stdlib.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int diver(int a,int b)
{
	return a/b;
}

int main()
{
	int (*pfunc[4])(int a,int b)={add,sub,mul,diver},i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",pfunc[i](200,100));
	}
	return 0;
}
