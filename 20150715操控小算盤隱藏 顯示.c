#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main ()
{
	HWND win;
	win=FindWindow("CalcFrame","�p��L");
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
		printf("�䤣�즹���ε{��\n");
	}
}
