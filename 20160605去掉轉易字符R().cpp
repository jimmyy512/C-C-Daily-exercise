#include <stdio.h> 
#include <stdlib.h> 
#include <iostream>
using namespace std;
int main()
{
	//char * str = "C:\\Users\\Jim\\Desktop\\新文字文件.txt";//正常
	char* str =R"("C:\Users\Jim\Desktop\新文字文件.txt")"; //R"()"去掉轉義 字符
	system(str);
	system("pause");
}

