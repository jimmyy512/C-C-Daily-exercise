/*
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int j,k,i;
	int a=5,b=5;
	for(j=1;j<=9;j++){
		for(k=1;k<=9;k++){
			if (k==a||k==b)
				printf("*");
			else 
				printf(" ");
		}
		printf("\n");
		if(j<=4){
			a--;
			b++;
		}
		if(j>=5){
			a++;
			b--;
		}
	}
	return 0;	
}
