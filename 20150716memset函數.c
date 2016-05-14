#include <stdio.h> 
#include <stdlib.h>
#include <memory.h>
int main ()
{
	char str[20]="Taiwan is good";
	int num[6]={1,2,3,4,5,6};
	memset(str,'A',6);//從str的首地址開始，像後找6個byte,進行賦值 
	memset(num,0,20);//5*4=20   
	printf("%s\n",str);
	int i;
	for(i=0;i<6;i++)
		printf("%d ",num[i]);
	
}
