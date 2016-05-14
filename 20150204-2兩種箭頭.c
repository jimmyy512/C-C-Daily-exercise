/*
    *
   ***
  * * *
    *
    *
    *
    *
    *
    *
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int i,j,k,a=5,b=5;
	for (j=1;j<=9;j++){
		for (k=1;k<=9;k++){
			if(k==a || k==b || k==5 ){
				printf("*");
			}
			else
				printf(" ");
		}
		if (j<3){
			if (j==3){
				a=4;
				b=6;
				printf("*");
			}
			a--;
			b++;
		}
		else {
			a=5;
			b=5;
		}
		printf("\n");
	}
/*
    *
   ***
  *****
    *
    *
    *
    *
    *
    *
*/
		a=4,b=1;
		printf("\n");
		for (j=1;j<=9;j++){
			for (k=a;k>=1;k--)
				printf(" ");
			for (k=1;k<=b;k++)
				printf("*");
			if (j<3){
			a--;
			b=b+2;
			}
			else {
				a=4;
				b=1;
			}
			printf("\n");
		}
	return 0;
}
