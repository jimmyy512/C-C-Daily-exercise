/*
���]�{�b���w��50��,10��,5��,1��
�ռg�X�@�ӵ{���γ̤֪��w���Ӫ�ܧA��J�����B �C
�Ҧp:87��=1��50��,3��10��,1��5��,2��1�� 
*/
#include <stdio.h> 
#include <stdlib.h>
int main (void){
	int m,a,b,c,d;
	printf("��J���B\n");
	scanf("%d",&m);
	if (m>=50){
		printf("%d��50�� ",m/50);
		m=m%50;
	}
	if (m>=10){
		printf("%d��10�� ",m/10);
		m=m%10;
	}if (m>=5){
		printf("%d��5�� ",m/5);
		m=m%5;
	}if (m>=1){
		printf("%d��1��",m);
	}
	return 0;
}
