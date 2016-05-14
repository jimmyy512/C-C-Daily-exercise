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
	int j,k;
		for (j=1;j<=10;j++){
			for (k=1;k<=j;k++){
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
	for (j=1;j<=10;j++){
		for (k=10;k>=j;k--){
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
	for (j=0;j<10;j++){
		for (k=10;k>10-j;k--)
			printf(" ");
		for (k=10;k>j;k--)
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
	for (j=1;j<=10;j++){
		for (k=1;k<=10-j;k++) printf(" ");
		for (k=1;k<=j;k++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
