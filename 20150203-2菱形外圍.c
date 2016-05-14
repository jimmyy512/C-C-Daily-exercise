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
	int j,k,a=5,b=5;
	for (j=1;j<=9;j++){
		for (k=1;k<=9;k++){
			if(k==a || k==b)
				printf("*");
			else
				printf(" ");
		}
		if (j<=5){
			if(a==1){
				a=2;
				b=8;
			}
			else {
				a--;
				b++;		
			}
		}
		else	{
			a++;
			b--;
		}
		printf("\n");
	}
	return 0;
}
