#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int * mindata(int a[],int n)
{
	int *p=NULL;  //�O�s�̤p�� 
	int min=a[0],i;//���wa[0]�O�̤p�� 
	p=&a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			p=&a[i];     //���V�̤p�� 
		}
	}
	printf("mindata�̤p��=%d\n",min);
	return p;   //�^�ǳ̤p�ȱo�a�} 
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
	int *p=mindata(a,10);  //���w��ƪ�^�a�} 
	*p=5;               //�ק�̤p�Ȭ�5 
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}
