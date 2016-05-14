#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	int *p=malloc(sizeof(int)*num);
	for(i=0;i<num;i++)
	{
		p[i]=i;
		printf("%d,%p\n",p[i],&p[i]);
	}
	free(p);
	system("pause");
}
