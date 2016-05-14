#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int sum=0,i,j;
	for(i=0;i<4;i++)
	{
		sum+=i;
		{
			for(j=0;j<3;j++)
			{
				auto sum=100;//auto 的變數範圍是看{}之間的範圍 
				sum+=10;
				printf("j迴圈裡的sum值%d\n",sum);
			}
		}
		printf("i迴圈裡的sum值%d\n",sum);
	}
}
