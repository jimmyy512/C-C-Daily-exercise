#include <stdio.h>
#include <stdlib.h>
void show()
{
	printf("hello world\n");
}
int main()
{
	void (*pshow)()=show;//show ��ƦW ������w�`�� 
	pshow();
	return 0;
}
