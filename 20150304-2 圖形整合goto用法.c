#include <stdio.h>
#include <stdlib.h>
int main (void){
	int j,k,i,a=1;
	printf("number=?\n");
	stop:
	scanf("%d",&i);
	if(i%2==0){
		printf("再輸入一次\n");
		goto stop;
	}
	for(j=1;j<=i;j++){
		for(k=1;k<=a;k++){
			printf("*");
		}
		printf("\n");
		if (j<=i/2)
			a++;
		if (j>=i/2+1)
			a--;
	}
return 0;
}
	
