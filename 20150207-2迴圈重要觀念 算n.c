/*
��while �j��ӭp��1+2+3+....+n<10000 �̤j��n? 
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int sum=0,i=1;
	while (sum<10000){
		sum+=i;
		if (sum>=10000){ //�]���j�� �ҥH�h�@�� �1�N�n!  
		printf("%d\n",i-1);
		}
		i++;
	}
	printf("%d",i); //��S���g�Lif���q���l�� �Ʀr�|�h�X2 �ҥH�n-2
					//��������-2 �n�����ץ��T printf("%d",i-2);
					//�ݭn�o�˼g 
	return 0;
}

