#include <stdio.h>
#include <stdlib.h>
void changeP(int *p,int *num2)
{
	p=num2;
	printf("func num:%p num2:%p\n",p,num2);
}
void M_changeP(int **p,int *num2)
{
	*p=num2;
	printf("func num:%p num2:%p\n",p,num2);
}
int main()
{
	int num=10;
	int num2=20;
	int *p=&num;
	printf("main num:%p num2:%p\n",&num,&num2);
	//changeP(p,&num2);//µL®Ä 
	M_changeP(p,&num2);
	printf("%d",*p);
	return 0;
}
