#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	printf("\n");
	int a[10] = { 0 },i,j;
	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 1000;
		printf("a[%d]=%d\n", i, a[i]);
		for (j = i - 1; j > -1; j--)
		{
			if (a[i] == a[j])
				i--;
		}
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (a[j]>a[j + 1])
			{
				int tmp;
				tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("\n�Ƨǫ�\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
	
	int top=0, mid, bot=9,num,e=0;
	printf("\n");
	printf("�п�J�A�Q�n���Ʀr\n");
	scanf_s("%d",&num);
	
	do 
	{
		mid = (top+bot)/2;
		printf("\ntop=%d,mid=%d,bot=%d\n", a[top], a[mid], a[bot]);
		e++;
		if (num == a[mid])
		{
			printf("���F!!!!!\n");
			printf("�`�@�X�{%d��", e);
			break;
		}
		else if (num > a[mid])
		{
			top = mid + 1;
			if(num<a[top] || num>a[bot])
			{
				printf("�S�o�Ӽ�\n");
				break;
			}
		}
		else
		{
			bot = mid - 1;
			if(num>a[bot] || num<a[top])
			{
				printf("�S�o�Ӽ�\n");
				break;
			}
		}
	} while (1);

}
