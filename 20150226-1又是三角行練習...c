/*
*
**
***
****
*****
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int j,k,n;
	printf("你要輸入幾行?");
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		for(k=1;k<=j;k++){
			printf("*");
		}
		printf("\n");
	}
	/*

*****
****
***
**
*
	*/
	printf("\n");
	for(j=1;j<=n;j++){
		for(k=n;k>=j;k--)
			printf("*");
		printf("\n");
	}
	printf("\n");     //網路上寫法 
	for (j=n; j>=1; j--){
    	for (k=1;k<=j; k++)
        	printf("*");
    printf("\n");
	}
/*
     *****
      ****
       ***
        **
         *
*/
	printf("\n");
	int i=0;
	for(j=1;j<=n;j++){
		for(k=1;k<=n;k++){
			if(k>=j) 
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	for(j=0;j<=n;j++){
		for(k=n;k>n-j;k--)
			printf(" ");
		for(k=n;k>j;k--)
			printf("*");
		printf("\n");
	}
	return 0;
}
