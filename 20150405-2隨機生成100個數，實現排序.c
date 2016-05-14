//隨機生成100個數，實現排序
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	int a[100]={0},i,j,k,sum,num;
	srand(time(NULL));
	for(i=0;i<100;i++)
	{
		a[i]=rand()%1000;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				i--;
		}
		printf("a[%d]=%d\n",i,a[i]);
	}
	//排序後
	printf("\n排序後\n\n");
	for(i=0;i<100-1;i++) //每執行一次冒泡就有一個極值沉底 
	{
		for(j=0;j<100-1-i;j++) //沉底的極值就不用再交換 所以-i個 
		{
			if(a[j]>a[j+1])
			{
				int tmp;
				tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(i=0;i<100;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
