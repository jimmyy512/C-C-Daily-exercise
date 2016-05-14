/*
假設現在有硬幣50元,10元,5元,1元
試寫出一個程式用最少的硬幣來表示你輸入的金額 。
例如:87元=1個50元,3個10元,1個5元,2個1元 
*/
#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int i,j=0,input;
	printf("請輸入金額:\n");
	scanf("%d",&input);
	printf("%d元=",input);
	if(input>=50)
	{
		if(j==0)
		{
			printf("%d個50元",input/50);
			j++;
		}
		else
			printf(",%d個50元",input/50);
		input%=50;
	}
	if(input>=10)
	{
		if(j==0)
		{
			printf("%d個10元",input/10);
			j++;
		}
		else
			printf(",%d個10元",input/10);
		input%=10;
	}
	if(input>=5)
	{
		if(j==0)
		{
			printf("%d個5元",input/5);
			j++;
		}
		
		else
			printf(",%d個5元",input/5);
		input%=5;
	}
	if(input>=1)
		printf(",%d個1元",input);
}
