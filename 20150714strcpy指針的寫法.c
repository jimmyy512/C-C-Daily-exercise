#include <stdio.h>
#include <stdlib.h>
char * mystrcpy(char *dest,char *source)    //�n�^�ǫ��w ��ƫe���ݭn�[�W* 
{
	char *last=NULL;
	if(dest!=NULL || source!=NULL)
		last=dest;	
	else
		return last;	//�Ǧ^�ū��w 
	while((*dest++=*source++)!='\0');
	return last;
}
int main ()
{
	char str[40];
	printf("%s",mystrcpy(str,"��c�u���W"));
	
	//��ƪ�^���w���a�}�A�����\��^NULL,���\��^�a�} 
}
