/*
���]�{�b���w��50��,10��,5��,1��
�ռg�X�@�ӵ{���γ̤֪��w���Ӫ�ܧA��J�����B �C
�Ҧp:87��=1��50��,3��10��,1��5��,2��1�� 
*/
#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int i,j=0,input;
	printf("�п�J���B:\n");
	scanf("%d",&input);
	printf("%d��=",input);
	if(input>=50)
	{
		if(j==0)
		{
			printf("%d��50��",input/50);
			j++;
		}
		else
			printf(",%d��50��",input/50);
		input%=50;
	}
	if(input>=10)
	{
		if(j==0)
		{
			printf("%d��10��",input/10);
			j++;
		}
		else
			printf(",%d��10��",input/10);
		input%=10;
	}
	if(input>=5)
	{
		if(j==0)
		{
			printf("%d��5��",input/5);
			j++;
		}
		
		else
			printf(",%d��5��",input/5);
		input%=5;
	}
	if(input>=1)
		printf(",%d��1��",input);
}
