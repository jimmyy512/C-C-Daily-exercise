#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"cht");
	wchar_t *p1=L"hello world";
	cout<<p1<<endl;
	wchar_t *p2=L"�A�n�@��hello world";
	cout<<p2<<endl;
}
