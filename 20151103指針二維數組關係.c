#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
	int *p=a,i;
	for(i=0;i<12;i++)
	{
		printf("a[%d][%d]=%d\n",i/3,i%3,a[i/3][i%3]);
	}
	printf("\n");

	p+=2;    //intÃþ§Î +2 =2*4=8­Óbyte 
	*p=123;
	for(i=0;i<12;i++)
	{
		printf("a[%d][%d]=%d\n",i/3,i%3,a[i/3][i%3]);
	}
}
