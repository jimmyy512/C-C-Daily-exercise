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
	int j,k,i,a;
	printf("number=?\n");
	scanf("%d",&i);
	for(j=1;j<=i;j++){
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
	for(j=1;j<=i;j++){
		for(k=i;k>=j;k--){
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
	for(j=1;j<=i;j++){
		for(k=2;k<=j;k++)
			printf(" ");
		for(k=i;k>=j;k--)
			printf("*");
		printf("\n");
	}
/*

         *
        **
       ***
      ****
     *****

*/
	printf("\n");
	for(j=1;j<=i;j++){
		for(k=i;k>j;k--)
			printf(" ");
		for(k=1;k<=j;k++)
			printf("*");
		printf("\n");
	}
/*
*
**
***
****
*****
****
***
**
*
*/
// mid 4 d
	a=1;
	printf("\n");
	
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
