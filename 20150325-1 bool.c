#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main ()
{
	bool a=5>1,c=10<1;
	if(a){
		printf("成立");
	}
	else{
		printf("不成立");
	}
	printf("\n");
	b(c);
}
int b(c){
	if(c){
		printf("成立");
	}
	else{
		printf("不成立");
	}
}
