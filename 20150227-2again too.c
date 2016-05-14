/*
*
**
***
****
*****
******
*******
********
*********
**********
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int j,k,i,n,a;
	printf("input=?\n");
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		for(k=1;k<=j;k++){
			printf("*");
		}
		printf("\n");
	}
/*

**********
*********
********
*******
******
*****
****
***
**
*
*/
	printf("\n");
	for (j=1;j<=n;j++){
		for (k=n;k>=j;k--){
			printf("*");
		}
		printf("\n");
	}
  
/*
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
*/
    printf("\n");
	for (j=1;j<=n;j++){
		for(k=1;k<j;k++)
			printf(" ");
		for(k=n;k>=j;k--)
			printf("*");
		printf("\n");
	}
/*

         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
*/
	printf("\n");
	for(j=1;j<=n;j++){
		for(k=n-1;k>=j;k--)
			printf(" ");
		for(k=1;k<=j;k++)
			printf("*");
		printf("\n");
	}

	return 0;
}
