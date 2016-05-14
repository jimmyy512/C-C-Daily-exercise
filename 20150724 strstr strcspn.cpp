#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	const char *str={"Hello World!hello"};
	cout<<strcspn(str,"W")<<endl;//計算第幾個字元出現 從0開始算 
	cout<<strstr(str,"h");//查看子字串 
	
	
} 
