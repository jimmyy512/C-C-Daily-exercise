/*
輸入最小公倍數
比如 2 3輸出6
6 12 輸出12
*/ 
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int a,b,i=1;
	printf("輸入兩個數字\n");
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

