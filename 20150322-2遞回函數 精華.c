//����(factorial)
// 1*2*3*4*5
//go(1)=1,go(2)=1*2,go(3)=1*2*3   //�פ���� ,go(1)=1(�̫�@��) 
//go(n)=go(n-1)*n  //�`���n�� ��n�Ө̿��n-1��
//go(5)=go(4)*5=go(3)*4*5=go(2)*3*4*5=go(1)*2*3*4*5
#include <stdio.h>
#include <stdlib.h>
int go(int n)
{
	if (n==1)return 1;		//�פ���� ,go(1)=1(�̫�@��) 
	else return go(n-1)*n;	//�`���n�� ��n�Ө̿��n-1��
}
void main (void)
{
	printf("%d",go(5));
}
