#include <iostream>
#include <cstring>
using namespace std;
class String
{
	char* p;
public:
	String(char * n)
	{
		//p = new char[10];
		//strcpy(p, n);
		p = n;
	}
	~String()
	{
		cout << "�Ѻc�l���榨�\!!" << endl;
		/*delete[]p;*/
	}
};
int main()
{
	String test("hellow!");
	system("pause");
}
