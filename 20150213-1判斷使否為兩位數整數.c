/*
��J�@�Ӿ�ơA�ЧP�_�o�Ӿ�Ƭ����ƾ�ơ]�ЦҼ{99��10 �P -10��-99 ��ت��p�^�C
*/
#include <stdio.h>
#include <stdlib.h>
void main (){
	int i;
	printf("��J�@�Ӿ��!\n");
	while (scanf("%d",&i)!=EOF){
		if (i>=10 && i<=99)
			printf ("�O����\n");
		else if (i<=-10 && i<=99)
			printf ("�O����\n");
		else 
			printf ("���O���ƾ��\n");
			break;
	}
}
