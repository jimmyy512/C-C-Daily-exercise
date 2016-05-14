//輸入10個數，存入一個數組，並輸出從小到大，從大到小
#include <stdio.h>
#include <stdlib.h>
int small()
{
	int a[10]={0},i,j,k,sum,num;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{ 
			int tmp;
			tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
int main()
{
	small();
}
