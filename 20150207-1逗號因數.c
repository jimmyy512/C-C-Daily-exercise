/*
��J�@�ӼƦr�P�_�O�_��2,3,5,7,11���]��
�p�G������ܥX��!
�п�J�@�ӼƦr:36
36��2,3�Ӧ]��
363��3,11�Ӧ]��
*/ 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int Num[5]={2,3,5,7,11};
	int input,i,j=0;
	scanf("%d",&input);
	printf("%d��",input);
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
