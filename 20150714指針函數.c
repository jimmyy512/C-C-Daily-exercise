#include <stdio.h>
int a=100,b=20;
int * go()   //��^���w 
{
	return &a;
}
int main ()
{
	printf("%d",*(go()));   // *( )  ���X���e 
}
