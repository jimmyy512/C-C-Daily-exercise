#include <stdio.h>
#include <stdlib.h>
int i = 0,j=0;
int test(int (*p)[4]) //二維數組  一定要加括號 不然會錯誤
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%4d", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int Num[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12 };
	test(Num);
	system("pause");
}
