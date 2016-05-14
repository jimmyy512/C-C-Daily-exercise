//輸入大寫字母自動轉換小寫字母
//輸入小寫字母自動轉換大寫字母 
#include <stdio.h>
#include <stdlib.h>
int main(){
	char i;
	int a;
	printf("輸入一個字母\n");

	i=getchar();
//	printf("%c,%d\n",i,i);
	if(i>=65 && i<=90)
		printf("%c",i+32);
	if(i>=92 && i<=122)
		printf("%c",i-32);
	system("pause");
	
	return 0;
}

