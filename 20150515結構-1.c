#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct sum
{
	int x,y;
	char word[20];
};
int main()
{
	struct sum a;
	//a.word="fuck" error! �r�Ŧꤣ�i�H��ȸ���� 
	strcpy(a.word,"fuck");  //string.h
	sprintf(a.word,"fuck");//stdio.h
	printf("%s",a.word);
}

