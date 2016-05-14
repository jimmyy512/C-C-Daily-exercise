#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 50;
	int *p1 = &a;
	double *p2 = &a;
	if (p1 == p2)
		printf("兩個指針指向同一個地址");
	else
		printf("指向不同地址");
	printf("\n%d   %f\n", *p1, *p2);
	printf("\n%d   %d\n", *p1, *p2);

	//用普通指針取另一個指針的地址
	//結果出錯!!!!!error
	double *p3 = p1;
	*p3 = 20;
	printf("\n用普通指針取另一個指針的地址%d   %d    error!!!!\n", *p1, *p2);

	//二級指針是用來存取指針的地址
	//double * = 4byte
	//因為記憶體是4個byte 如果用double(8個byte去取地址的值) 就會出錯
	double **p4 = p1;
	*p4 = 100;
	printf("\n用二級指針取另一個指針的地址%d   %d correct!!!\n", *p1, *p2);
	system("pause");
}
