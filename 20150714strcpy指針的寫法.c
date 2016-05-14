#include <stdio.h>
#include <stdlib.h>
char * mystrcpy(char *dest,char *source)    //要回傳指針 函數前面需要加上* 
{
	char *last=NULL;
	if(dest!=NULL || source!=NULL)
		last=dest;	
	else
		return last;	//傳回空指針 
	while((*dest++=*source++)!='\0');
	return last;
}
int main ()
{
	char str[40];
	printf("%s",mystrcpy(str,"學c真辛苦"));
	
	//函數返回指針的地址，不成功返回NULL,成功返回地址 
}
