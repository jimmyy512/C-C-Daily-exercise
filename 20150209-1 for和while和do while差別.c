/*
1*4+3*6+5*8+.....+101*104=?
*/  //���D�ΤFfor�Mdo while �Mwhile�g�k���m��! 
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int i=1,sum=0;
	for (i=1;i<=101;i+=2){ //for �g�k 
		sum+=i+(i+3);
	}
	printf("%d\n",sum);
	sum=0;//do while�g�k ��Ʀr�k����� 
	i=1;
	do{
		sum+=i+(i+3);
		if (i==101){
			printf("%d\n",sum);
			break;
		}
		else
			i+=2;
	}while (i<=101);
	sum=0;//��while �h�g ��ƭ��k����� 
	i=1;
	while (i<=101){
		sum+=i+(i+3);
		if (i==101){
			printf("%d\n",sum);
			break;
		}
		else
			i+=2;
	}
	return 0;
}
