/*
	 *****
      ****
       ***
        **
         *
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int j,k,n,i;
	printf("input:");
	scanf("%d",&n);
	for(j=n;j>=1;j--){
		for(k=n;k>=1;k--){
			if(k<=j) 
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
