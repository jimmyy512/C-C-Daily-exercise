#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
int main()
{
	int i;
	char *p="tasklist & pause";//指針儲存地址 
	//*p='a'   常量字符串不可修改 
	char *px=p;
	while(*px!='\0')
	{
		putchar(*px);
		px++;
	}
	system(px);
	
	
}
