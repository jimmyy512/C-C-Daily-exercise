#include <windows.h>
#include <stdio.h>
HWND hNote; //�O�ƥ�Edit���y�`
int main(void)
{
	hNote = FindWindow(NULL,"test.txt - �O�ƥ�"); //���O�ƥ������f�y�`
	if( 0 == hNote)
		printf("�O�ƥ����B��..");
	else
		printf("�O�ƥ��v���}....");
	/* ToDo:�b�o�̲K�[�~����l�ƥN�X*/
	hNote = FindWindowEx(hNote,0,"Edit",0); //���O�ƥ�Edit�����y�`
	while(1)
	{
		Sleep(1000); //���ݬ�
		PostMessage(hNote,WM_KEYDOWN,'A',0); //���U
		PostMessage(hNote,WM_KEYUP,'A',0xC0000000); //�лx��1100 0000 0000 0000 �u�_
	}
}
