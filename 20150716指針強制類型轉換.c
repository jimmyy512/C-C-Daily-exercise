#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num=10;
	char str='A';
	double db=10.8;
	void *p=&num;    //void���������w�i�H�s�����N�������Ʀr 
	p=&str;
	p=&db;
	//printf("%d\n",*p);//���O���M�ū��w��e�ǥ��N���� �����D�a�} �o�����q���̵��� �]���L�k���L
	*((double *)p)=20.8;//�j�������ഫ�� �ýᤩ�ȭק�db�����e 
	//printf("%f\n",p);//�٬O���� ���M�W���ഫ�Ldouble ���� �����W�٬Ovoid���������w
	//					�]���n���L�X�Ȯ��٬O�n�j�������ഫ  
	printf("%f\n",*((double *)p));  //*()���X���e (double *)�ഫ��double���� ���T�i�D�j�p �ҥH�ॴ�L 
}
