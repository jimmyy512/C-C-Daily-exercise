/*
��J����]������@�ӥ���ơ^�A�P�_������b�|�u�]�K�B�L�B��ΥV�^�������@�u �H
�K�G3~5��A�L�G6~8��A��G9~11��A�V�G12��H��1-2��
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int m;
	printf("�п�J���\n");
	while (scanf("%d",&m)!=EOF){
		if (m<=0){
			printf("�S�o�Ӥ����!�Э��s��J!\n");
			continue;
		}
		else{
			if (m==12 || m<=2)
				printf("�V�u\n");
			else if (m<=5)
				printf("�K�u\n");
			else if (m<=8)
				printf("�L�u\n");
			else if (m<=11)
				printf("��u\n");
			else
				printf("��J���~�Э��s��J!\n");
		}
	}
	return 0;
}
