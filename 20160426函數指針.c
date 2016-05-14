#include <stdio.h>
#include <stdlib.h>
void show()
{
	printf("hello world\n");
}
int main()
{
	void (*pshow)()=show;//show 函數名 等於指針常數 
	pshow();
	return 0;
}
