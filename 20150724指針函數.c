#include <stdio.h>
#include <stdlib.h>
int add(int a,int b)
{
	return a+b;
}
int multiply(int a,int b)
{
	return a*b;
}
int main()
{
//	int add(int a,int b);   ���ƦW�٫��� �Ϋ��w���N �N�|�ܦ����w��� 
	int (*p)(int,int);  //�ѼƯ�ٲ� ��������ٲ� 
	p=add;   //���w���Vadd��� 
	printf("%d\n",p(3,4));
	p=multiply;//���w���Vmultiply��� 
	printf("%d\n",p(3,4));
	
	
}
