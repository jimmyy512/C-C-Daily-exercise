#include <stdio.h>
#define a 10
void main1()
{
//	printf("%d",&a);     define�ŧi�᪺�F���b�`�q�� �L�k�ק�
	const int b=10;
//	int b=12;    �|�X�� const �N����ק� ���O�q�~���A���s�N�i�H�h�ק� 
	printf("%x",&b); 
}
void main()  //�P�_�ƦC�̦��h�֭ӼƦr 
{
	int i;
	int c[]={2,3,4,5};
	for(i=0;i<sizeof(c)/sizeof(int);i++){
		printf("c[%d]=%d\n",i,c[i]);
	}
	printf("�`�@��%d�ӼƦr",sizeof(c)/sizeof(int));
	prrintf("\n");
	printf("%d",5==5==1);
//	�p�G���󦨥����1 ���󤣦������0 
//	printf("%x",&c);
}
