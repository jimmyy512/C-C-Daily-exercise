/*
   ***
 *     *
*       *
*       *
*       *
*       *
*       *
 *     *
   ***
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int j,k,a=4,b=5,c=6;
	for (j=1;j<=9;j++){
		for (k=1;k<=9;k++){
			if (k==a || k==b || k==c)
				printf ("*");
			else
				printf (" ");
		}
		if (j==1){
			a-=2;
			b=0;
			c+=2;
		}
		if (j==2){
			a--;
			c++;
		}
		if (j==7){
			a++;
			c--;
		}
		if (j==8){
			a=4,b=5,c=6;
		}
	     printf("\n");
	}
	return 0;
}

