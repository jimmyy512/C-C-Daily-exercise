#include <stdio.h>
#include <stdlib.h>
int i;
char change(char *p,int n)
{
	printf("%x",&p[0]);
	for(i=0;i<n/2;i++)
	{
		char **tmp=&p[i];
		p[i]=p[n-1-i];    //10-1=9 9-0=9  所以Num[0]=Num[9] 第一位元素和最後一位交換
		p[n-1-i]=tmp; 
	}
	
}
int main ()
{
	char Num[10]={1,2,3,4,5,6,7,8,9,10};
	change(Num,10);
	for(i=0;i<10;i++)//打印反過來後的數值 
		printf("%c ",Num[i]);
}

