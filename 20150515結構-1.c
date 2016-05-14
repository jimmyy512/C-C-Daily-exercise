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
	//a.word="fuck" error! 字符串不可以賦值號賦值 
	strcpy(a.word,"fuck");  //string.h
	sprintf(a.word,"fuck");//stdio.h
	printf("%s",a.word);
}

