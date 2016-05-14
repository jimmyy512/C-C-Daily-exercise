#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int plus(int a,int b)
{
	return a+b;
}
void show()
{
	MessageBoxA(0,"小夥子，你中木馬了","error!",0);
}
int main()
{
	int a,b;
	int (*p)(int a,int b)=plus;
	printf("%d",p(1,20));
	
	void (*px)()=show;
	px();
	
}
