#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
int main()
{
	int i;
	char *p="tasklist & pause";//���w�x�s�a�} 
	//*p='a'   �`�q�r�Ŧꤣ�i�ק� 
	char *px=p;
	while(*px!='\0')
	{
		putchar(*px);
		px++;
	}
	system(px);
	
	
}
