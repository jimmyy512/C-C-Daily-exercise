#include <stdio.h>
#include <stdlib.h>
int i = 0,j=0;
int test(int (*p)[4]) //�G���Ʋ�  �@�w�n�[�A�� ���M�|���~
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
