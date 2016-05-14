#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main ()
{
	HWND win;
	win=FindWindow("CalcFrame","小算盤");
	if(win!=NULL)
	{
		while(1)
		{
			ShowWindow(win,SW_HIDE);
			Sleep(1000);
			ShowWindow(win,SW_SHOW);
			Sleep(1000);
		}
		
	}
	else
	{
		printf("找不到此應用程式\n");
	}
}
