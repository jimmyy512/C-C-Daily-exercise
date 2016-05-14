/*  1
	12
	123
	1234
	12345*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int j,k,i=1;
	for(j=1;j<=5;j++){
		for(k=1,i=1;k<=j;k++){
			printf("%d",i);
			i++;
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
    int e=1;
    for(j=1;j<=9;j++){
    	for(k=1,i=1;k<=e;k++){
    		printf("%d",i);
    		i++;
    	}
		printf("\n");
		if(j>=5) e--;
		else e++;
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
	e=1;
	for(j=1;j<=12;j++){
		for(k=1,i=1;k<=e;k++){
			printf("%d",i);
			i++;
		}
		printf("\n");
		if (j==4)
			e=1;
		if (j==8)
			e=2;
		e++;
	}
	return 0;
	}

    

