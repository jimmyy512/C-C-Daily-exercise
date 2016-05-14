#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
	int i,a=1;

	system("ipconfig");
	system("title 123");
	for(i=0x0;i<=0xf;i++)
	{
		char str[30]={0};
		sprintf(str,"color %x%x\n",i,0xf-i);
		system(str);

	}
		

	
}
