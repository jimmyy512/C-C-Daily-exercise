#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, i, j;
	while (scanf("%d", &a) != EOF)
	{
		j = 0;
		for(i=1;i<=a;i++)
		{
			if (a%i == 0)
				j++;	
		}
		if (j == 2)
			printf("質數\n");
		else
			printf("非質數\n");
	}
	return 0;
}
