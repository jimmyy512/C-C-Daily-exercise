#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
	int *pa=&a,*pb=&b;
	scanf("%d,%d",&a,&b);
	if(*pa<*pb)
	{
		int tmp=*pa;
		*pa=*pb;
		*pb=tmp;
	}
	printf("max=%d,min=%d",*pa,*pb);
}
