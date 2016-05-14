//實現循環一次初始化二維數組。
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5][4], i, j, k, num = 0;

	for (i = 0; i < 12; i++)
	{
		a[i / 5][i % 4] = num;
		num++;
	}
	for (i = 0; i<5; i++)
	{
		for (j = 0; j<4; j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
}

