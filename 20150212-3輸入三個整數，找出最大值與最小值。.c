/*
��J�T�Ӿ�ơA��X�̤j�ȻP�̤p�ȡC
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int a,b,c,min,max;
	printf("��J�T�Ӿ��\n");
	while (scanf("%d%d%d",&a,&b,&c)!=EOF){
	if (a>b){
		max=a;
		min=b;
	}
	if (a<b){
		max=b;
		min=a;
	}
	if (max>c){
		c=min;
	}
	if (max<c){
		max=c;
	}
	printf("�̤j��%d,�̤p��%d\n",max,min);
}return 0;
}
