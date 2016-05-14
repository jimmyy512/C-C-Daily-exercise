#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p=NULL,a=10,b=20;
	p=&a;
	printf("a=%d %x b=%d %x \n",a,&a,b,&b);
	printf("p=%x *p=%d\n",&p,*p);
	*p=b;
	printf("*p=b«á\n");
	printf("p=%x *p=%d\n",&p,*p);
	printf("a=%x a=%d\n",&a,a);
}
