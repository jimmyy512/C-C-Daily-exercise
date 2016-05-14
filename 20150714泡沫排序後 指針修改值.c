//泡沫排序 由小到大 將第一個最小數 用指針修改為 999 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rander(int *p)
{
	int i,j;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		p[i]=rand()%100;
		for(j=0;j<i;j++)
		{
			if(p[j]==p[i])
			{
				i--;
				break;
			}
		}
	}
}
int * bobble(int *p)
{
	int j,i,*p1;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			int tmp;
			if(p[j]>p[j+1])
			{
				tmp=p[j+1];
				p[j+1]=p[j];
				p[j]=tmp;
			}
		}
	}
	return p1=&p[0];
}
int main(void)
{
	int *p,i;
	int Num[10];
	rander(Num);
	for(i=0;i<10;i++)
		printf("%d\n",Num[i]);
	p=bobble(Num);
	*p=999;
	printf("指針修改後\n");
	for(i=0;i<10;i++)
		printf("%d\n",Num[i]);
}
