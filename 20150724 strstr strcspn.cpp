#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	const char *str={"Hello World!hello"};
	cout<<strcspn(str,"W")<<endl;//�p��ĴX�Ӧr���X�{ �q0�}�l�� 
	cout<<strstr(str,"h");//�d�ݤl�r�� 
	
	
} 
