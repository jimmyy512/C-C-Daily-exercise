/*
1*4+3*6+5*8+.....+101*104=?
*/  //此題用了for和do while 和while寫法做練習! 
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int i=1,sum=0;
	for (i=1;i<=101;i+=2){ //for 寫法 
		sum+=i+(i+3);
	}
	printf("%d\n",sum);
	sum=0;//do while寫法 把數字歸為初值 
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
	sum=0;//用while 去寫 把數值歸為初值 
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
