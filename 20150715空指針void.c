#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int num=10;
	double db=9.8;
	int *pnum=&num;
//	int *pdb=&db;  //db�Odouble�����Ʀr �Y��int�������w�|�X�{ĵ�i .cpp�ɤU�|�X�{���~
// 	c++�n�D���Y��
	double *pdb=&db;
	void *p=&num;//void���������w�i�H�s�����N�������Ʀr 
	p=&db;
//	printf("%f",*p);   //���O���M�ū��w��e�ǥ��N���� �����D�a�} �o�����q���̵��� �]���L�k���L 
	printf("%f",*((double *)p));  //���ɱj�������ഫ�� double�����N���T�i�D�F���w 8 byte�ᵲ��
								//�]��������L�X�ƭ� 
	 
}
