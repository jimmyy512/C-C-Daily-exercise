#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{

		COORD point, point0;
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		
		int i;
		point0.X = 60;
		point0.Y = 0;
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		for (i = 0; i<23; i++)
		{
			point.X = i * 2;
			point.Y = i;
			SetConsoleCursorPosition(h, point);
			printf("*");
			//
			GetConsoleScreenBufferInfo(h, &csbi);
			SetConsoleCursorPosition(h, point0);
			printf("x : %d  y : %d\n", csbi.dwCursorPosition.X, csbi.dwCursorPosition.Y);
			//
			Sleep(100);
			SetConsoleCursorPosition(h, point);
			printf("  ");
	
	}
	system("PAUSE");
	return 0;
}
