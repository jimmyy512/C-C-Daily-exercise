#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 50;
	int *p1 = &a;
	double *p2 = &a;
	if (p1 == p2)
		printf("��ӫ��w���V�P�@�Ӧa�}");
	else
		printf("���V���P�a�}");
	printf("\n%d   %f\n", *p1, *p2);
	printf("\n%d   %d\n", *p1, *p2);

	//�δ��q���w���t�@�ӫ��w���a�}
	//���G�X��!!!!!error
	double *p3 = p1;
	*p3 = 20;
	printf("\n�δ��q���w���t�@�ӫ��w���a�}%d   %d    error!!!!\n", *p1, *p2);

	//�G�ū��w�O�ΨӦs�����w���a�}
	//double * = 4byte
	//�]���O����O4��byte �p�G��double(8��byte�h���a�}����) �N�|�X��
	double **p4 = p1;
	*p4 = 100;
	printf("\n�ΤG�ū��w���t�@�ӫ��w���a�}%d   %d correct!!!\n", *p1, *p2);
	system("pause");
}
