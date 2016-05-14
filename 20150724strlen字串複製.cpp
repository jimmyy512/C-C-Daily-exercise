#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//	char str1[20]="Hello World",str2[20]; 普通方法 
//	strcpy(str2,str1);
//	cout<<str2;
	const char *str1={"Hello World"};   //指針方法 
	char *str2=new char (strlen(str1));
	strcpy(str2,str1);
	cout<<str2;
	
	
	
}
