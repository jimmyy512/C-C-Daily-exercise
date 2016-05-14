#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main()
{
	int x1,y1;
	POINT p;
	while(1)
	{
		GetCursorPos(&p);
		printf("x=%4d y=%4d",p.x,p.y);
		Sleep(30);
		system("CLS");
		if (kbhit())
		{
			x1=p.x;
			y1=p.y;
			break;
		}
	}
	printf("®y¼Ð¬°%d %d",p.x,p.y);

	return 0;
}
