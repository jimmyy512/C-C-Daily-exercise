/*
块俱计т程籔程
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int a,b,c,min,max;
	printf("块俱计\n");
	while (scanf("%d%d%d",&a,&b,&c)!=EOF){
	if (a>b){
		max=a;
		min=b;
	}
	if (a<b){
		max=b;
		min=a;
	}
	if (max>c){
		c=min;
	}
	if (max<c){
		max=c;
	}
	printf("程%d,程%d\n",max,min);
}return 0;
}
