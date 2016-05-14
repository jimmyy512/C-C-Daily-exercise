#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	while(1)
	{
		int j,i,k=0;
		printf("input=");
		scanf("%d",&i);
		for(j=1;j<=i;j++)
		{	
			if (i%j==0)
				k++;
		}
		if (k==2)
			printf("質數\n");
		else 
			printf("非質數\n");
	}
	return 0;
}
