#include <stdio.h>
#include <stdlib.h>
int i = 0;
int test(int *p) //�üg��
{
	printf("%d\n", p[i]);
	i++;
	if (i > 9)
		return 0;
	else
		test(p);
}
void test2(int a[10])//���q�ƲնǤJ 
{
	printf("%d\n", sizeof(a));//�u�Ƕi�Ĥ@�զa�} ���F�`�����s���i��copy�Ҧ��Ʋ� �Ӯ��Ocpu
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
}
void test3(int *p)//���w��k�ǤJ 
{
	for(i=0;i<10;i++)
		printf("%d\n",p[i]);
}
int main()
{
	int Num[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("Num���j�p��:%d\n", sizeof(Num));
	//test(Num);
	test2(Num);
//	test3(Num);
	system("pause");
}
