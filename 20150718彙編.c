#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=5;
//	n+=5;
	_asm     //visual studio¤~¯à¥Î 
	{
		mov eax,n
		
		add eax,5
		
		mov n,eax
	}
	printf("%d",n);
}
