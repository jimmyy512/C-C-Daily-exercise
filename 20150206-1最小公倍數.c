/*
��J�̤p������
��p 2 3��X6
6 12 ��X12
*/ 
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int a,b,i=1;
	printf("��J��ӼƦr\n");
	scanf("%d%d",&a,&b);
	while (1){
		if ((i%a == 0) && (i%b == 0)){
			printf("%d\n ",i);
			break;
		}
		else
			i++;
	}
	return 0;
}

