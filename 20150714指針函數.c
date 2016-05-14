#include <stdio.h>
int a=100,b=20;
int * go()   //返回指針 
{
	return &a;
}
int main ()
{
	printf("%d",*(go()));   // *( )  取出內容 
}
