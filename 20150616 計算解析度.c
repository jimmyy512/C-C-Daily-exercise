#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()
{
	int x,y;
	POINT p;
	SetCursorPos(5000,5000);
	Sleep(5);
	GetCursorPos(&p);
	printf("�A���ѪR�׬�%d %d\n",p.x+1,p.y+1);
	system("pause");

	return 0;
}
