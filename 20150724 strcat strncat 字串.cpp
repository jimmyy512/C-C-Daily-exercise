#include <iostream>
#include <cstring>
using namespace std;
int main()
{
//	char str1[20]={"Hello "};         ���q��k 
//	char str2[20]={"World!^-^"};
//	char str3[30];
//	strcpy(str3,str1);
////	strcat(str3,str2);   //�������� �[�i�h
//	strncat(str3,str2,6);  //���wŪ���X�Ӧr 
//	cout<<str3;
	const char *str1={"Hello "};
	const char *str2={"world!^-^"};
	int len=strlen(str1)+strlen(str2);
	char *str3=new char(len);
	str3=strcpy(str3,str1);
	str3=strcat(str3,str2);
//	strncat()�]��� 
	cout<<str3;
	
	
} 
