/*
块俱计叫耞硂俱计ㄢ计俱计叫σ納99°10 籔 -10°-99 ㄢ贺猵
*/
#include <stdio.h>
#include <stdlib.h>
void main (){
	int i;
	printf("块俱计!\n");
	while (scanf("%d",&i)!=EOF){
		if (i>=10 && i<=99)
			printf ("琌ㄢ计\n");
		else if (i<=-10 && i<=99)
			printf ("琌ㄢ计\n");
		else 
			printf ("ぃ琌ㄢ计俱计\n");
			break;
	}
}
