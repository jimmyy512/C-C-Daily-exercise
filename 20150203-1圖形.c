/*¿é¥X 1¡G
*
**
***
****
******/
#include <stdio.h>
#include <Stdlib.h>
int main (void){
	int j,k,n,i;
	for (j=1;j<=5;j++){
		for (k=1;k<=j;k++){
		printf("*");	
		}
	printf("\n");
    }
/*  1
	12
	123
	1234
	12345*/
	
    printf("\n");
    for (j=1;j<=5;j++){
		for (k=1,i=1;k<=j;k++,i++){
			printf("%d",i);	
		}
	printf("\n");
    }
    
/*  
1
12
123
1234
12345
1234
123
12
1
    */
    printf("\n");
    int e=1,h=1;
	for(j=1;j<=9;j++){
		for(k=1,e=1;k<=h;k++){
			printf("%d",e);
			e++;
		}
		if (j<5){
			h++;
		}
		else
			h--;
		printf("\n");
	}

    
    /*
1
12
123
1234
12
123
1234
12345
123
1234
12345
123456
*/
printf("\n");
int a,b;
	for (a=0;a<3;a++){
		for (j=1;j<=4;j++){
			for (k=1,i=1;k<=j+a;k++){
				printf("%d",i);
				i++;
			}
		printf("\n");
		}
	}
    return 0;
}




