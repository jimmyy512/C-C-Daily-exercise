#include <stdio.h>
#include <stdlib.h>
int i = 0;
int test(int *p) //亂寫的
{
	printf("%d\n", p[i]);
	i++;
	if (i > 9)
		return 0;
	else
		test(p);
}
void test2(int a[10])//普通數組傳入 
{
	printf("%d\n", sizeof(a));//只傳進第一組地址 為了節約內存不可能copy所有數組 太浪費cpu
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
}
void test3(int *p)//指針方法傳入 
{
	for(i=0;i<10;i++)
		printf("%d\n",p[i]);
}
int main()
{
	int Num[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("Num的大小為:%d\n", sizeof(Num));
	//test(Num);
	test2(Num);
//	test3(Num);
	system("pause");
}
