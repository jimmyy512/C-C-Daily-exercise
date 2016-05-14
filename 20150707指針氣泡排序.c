#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i,j;
int srander(int  Num[10])
{
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		Num[i]=rand()%10;
		for(j=0;j<i;j++)
		{
			if(Num[i]==Num[j])
				i--;
		}
	}
	return 0;
}
int sorter(int *p,int n)
{
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				int tmp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=tmp;
			}
		}
	}
	return 0;
}
int main ()
{
	int Num[10];
	srander(Num);
	for(i=0;i<10;i++)
		printf("%d ",Num[i]);
	printf("\n");
	sorter(Num,10);
	for(i=0;i<10;i++)
		printf("%d ",Num[i]);
}
