//�H���ͦ�100�ӼơA��{�Ƨ�
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
	//�Ƨǫ�
	printf("\n�Ƨǫ�\n\n");
	for(i=0;i<100-1;i++) //�C����@���_�w�N���@�ӷ��ȨI�� 
	{
		for(j=0;j<100-1-i;j++) //�I�������ȴN���ΦA�洫 �ҥH-i�� 
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
