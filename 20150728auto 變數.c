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
				auto sum=100;//auto ���ܼƽd��O��{}�������d�� 
				sum+=10;
				printf("j�j��̪�sum��%d\n",sum);
			}
		}
		printf("i�j��̪�sum��%d\n",sum);
	}
}
