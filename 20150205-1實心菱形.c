/*
    *
   ***
  *****
 *  *  *
*********
 *  *  *
  *****
   ***
    *
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int j,k,a=5,b=5,c;
	for (j=1;j<=9;j++){
		for (k=1;k<=9;k++){
			if (k==a || k==b || j==5 || k==5)
				printf("*");
			else 
				printf(" ");
		}
			if (j<=5){
				if (a==1){
					a=2;
					b=8;
				}
				else{
					a--;
					b++;
				}
			}
			else{
				a++;
				b--;
			}
		printf("\n");
	}
/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
		a=4,b=1;
		printf("\n");
		for (j=1;j<=9;j++){
			for (k=a;k>=1;k--) printf(" ");
			for (k=1;k<=b;k++){
				printf("*");
			}
			if (j==6){
				a=1;
				b=7;				
			}
			if (j>=5){
				a++;
				b=b-2;
			}
			else {
				a--;
				b=b+2;
			}
			
			printf("\n");
			
		
		}
	return 0;
}
