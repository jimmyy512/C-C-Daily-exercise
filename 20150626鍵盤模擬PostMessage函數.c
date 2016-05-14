#include <windows.h>
#include <stdio.h>
HWND hNote; //記事本Edit類句柄
int main(void)
{
	hNote = FindWindow(NULL,"test.txt - 記事本"); //找到記事本父窗口句柄
	if( 0 == hNote)
		printf("記事本未運行..");
	else
		printf("記事本己打開....");
	/* ToDo:在這裡添加外掛初始化代碼*/
	hNote = FindWindowEx(hNote,0,"Edit",0); //找到記事本Edit類的句柄
	while(1)
	{
		Sleep(1000); //等待秒
		PostMessage(hNote,WM_KEYDOWN,'A',0); //按下
		PostMessage(hNote,WM_KEYUP,'A',0xC0000000); //標誌為1100 0000 0000 0000 彈起
	}
}
