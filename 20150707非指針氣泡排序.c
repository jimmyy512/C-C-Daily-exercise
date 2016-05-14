#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i,j;
void srander(int  Num[10])
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
}
void sorter(int Num[10],int n)
{
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(Num[j]>Num[j+1])
			{
				int tmp=Num[j];
				Num[j]=Num[j+1];
				Num[j+1]=tmp;
			}
		}
	}
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
