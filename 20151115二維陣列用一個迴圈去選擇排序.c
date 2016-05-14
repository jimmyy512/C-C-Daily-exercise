#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fun(int arr[3][5]);
void print(int arr[3][5]);
int main()
{
		srand(time(NULL));
		int score[3][5],i;
		for(i=0;i<15;i++)
		{
			score[i/5][i%5]=rand()%100+1;
			printf("%d ",score[i/5][i%5]);
		}
		printf("\n");
		fun(score[0]);
		for(i=0;i<15;i++)
		{
			printf("%d ",score[i/5][i%5]);
		}
}
void fun(int arr[3][5])
{
	int i,j;
	for(i=0;i<15;i++)
	{
		int max=i;
		for(j=i+1;j<15;j++)
		{
			if(arr[max/5][max%5]<arr[j/5][j%5])
			{
				max=j;
			}
		}
		if(max!=i)
		{
			int tmp=arr[max/5][max%5];
			arr[max/5][max%5]=arr[i/5][i%5];
			arr[i/5][i%5]=tmp;
		}
	}
//	print(arr);
}
void print(int arr[3][5])
{
	int i;
	for(i=0;i<15;i++)
	{
		printf("%d ",arr[i/5][i%5]);
	}
}

