/*
for (i=0;i<10;i++){
	if (i%2==1) 
		continue;
	printf("for,i=%d\n",i);
	if (i*7%3==1) 
		break;
	printf("i*7%3=%d\n",i*7%3);
}
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int i;
	for (i=0;i<10;i++){
		if (i%2==1) 
			continue;
		printf("for,i=%d\n",i);
		if (i*7%3==1) 
			break;
		printf("i*7\%3=%d\n",i*7%3);
	}
	printf("\n");
	i=0;
	while (i<10){
//		if (i==0)
//			printf("for,i=%d\n",i);
//			printf("i*7%3=%d\n",i*7%3);
		if (i%2==1){
			i++;
			continue;
		}
		printf("for,i=%d\n",i);
		if (i*7%3==1) 
			break;
		printf("i*7%3=%d\n",i*7%3);
			i++;
	}
	return 0;
}
