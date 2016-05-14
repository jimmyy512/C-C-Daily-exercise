#include <stdio.h>
#include <stdlib.h>
int a=100,b=10;
int maxdata(int a,int b)
{
	return a>b?a:b;//返回最大值 
}
int mindata(int a,int b)
{
	return a<b?a:b;//返回最小值 
}
int adddata(int a,int b)
{
	return a+b;
}
int run(int a,int b,int (*p)(int,int))
{
	return p(a,b);
}
int main ()
{
	int num;
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("%d",run(a,b,maxdata));
			break;
		case 2:
			printf("%d",run(a,b,mindata));
			break;
		case 3:
			printf("%d",run(a,b,adddata));
			break;
		default:
			break;
	}
}
