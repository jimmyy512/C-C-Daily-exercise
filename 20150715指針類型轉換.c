#include <stdio.h>
#include <stdlib.h>
int main ()
{
	
	int a=10;
	int b=20;
	printf("%p , %p\n",&a,&b);
	int *p;
	int x;
	scanf("%x",&x);//��J16�i����� 
//	printf("x=%d\n",x);
	p=(int *)x;//�N�a�}�ഫ�����w ���[int *�|�X�{ĵ�i 
	*p=3;
	printf("%d,%d",a,b);
}
