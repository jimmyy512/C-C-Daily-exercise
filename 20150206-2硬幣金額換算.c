/*
假設現在有硬幣50元,10元,5元,1元
試寫出一個程式用最少的硬幣來表示你輸入的金額 。
例如:87元=1個50元,3個10元,1個5元,2個1元 
*/
#include <stdio.h> 
#include <stdlib.h>
int main (void){
	int m,a,b,c,d;
	printf("輸入金額\n");
	scanf("%d",&m);
	if (m>=50){
		printf("%d個50元 ",m/50);
		m=m%50;
	}
	if (m>=10){
		printf("%d個10元 ",m/10);
		m=m%10;
	}if (m>=5){
		printf("%d個5元 ",m/5);
		m=m%5;
	}if (m>=1){
		printf("%d個1元",m);
	}
	return 0;
}
