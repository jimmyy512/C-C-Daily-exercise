#include <stdio.h> 
#include <stdlib.h> 
#include <iostream>
using namespace std;
int main()
{
	//char * str = "C:\\Users\\Jim\\Desktop\\�s��r���.txt";//���`
	char* str =R"("C:\Users\Jim\Desktop\�s��r���.txt")"; //R"()"�h����q �r��
	system(str);
	system("pause");
}

