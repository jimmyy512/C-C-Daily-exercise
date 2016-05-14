/*
块计耞琌Τ2,3,5,7,11计
狦Τ叫陪ボㄓ!
叫块计:36
36Τ2,3计
363Τ3,11计
*/ 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int Num[5]={2,3,5,7,11};
	int input,i,j=0;
	scanf("%d",&input);
	printf("%dΤ",input);
	for(i=0;i<5;i++)
	{
		if(input%Num[i]==0)
		{
			if(j==0)
			{
				printf("%d",Num[i]);
				j++;
			}
			else
				printf(",%d",Num[i]);
		}
	}
}
