#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main ()
{
	printf("���{��2��Y��100mb�O����A�ФŰ���L�[\n");//�u��visual studio�W���ĪG 
	while(1)
	{
		void *p=malloc(1024*1024*1024);   //�C���n�@��100mb���O����j�p
		p=NULL;//����w���`�εo���ܤơA���������s���|�Q����  
		free(p);
		Sleep(2000);
	}
	
	
	
	
	
}
