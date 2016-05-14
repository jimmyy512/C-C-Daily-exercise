#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int * mindata(int a[],int n)
{
	int *p=NULL;  //玂程计 
	int min=a[0],i;//安﹚a[0]琌程计 
	p=&a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			p=&a[i];     //程 
		}
	}
	printf("mindata程计=%d\n",min);
	return p;   //肚程眔 
}
int main ()
{
	int a[10],i=0,j;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				i--;
				break;
			}
		}
		printf("%d\n",a[i]);
	}
	int *p=mindata(a,10);  //皐ㄧ计 
	*p=5;               //э程5 
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}
