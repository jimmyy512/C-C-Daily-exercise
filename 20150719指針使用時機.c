#include <stdio.h> 
#include <stdlib.h>
int change(int num)
{
	return num=5;
}
void changer(int *p)
{
	*p=5;
}
void changearray(int *p)
{
	*p=2;
}
int main()
{
	int num=10;
	int array[1]={0};
//	change(num);
	changer(&num);
	changearray(array);
//	printf("%d",num);
	printf("%d",array[0]);
}
