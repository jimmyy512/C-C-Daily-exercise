#include <iostream>
using namespace std;
namespace ns
{
	int a=10;
	char* str="hello world";
}
namespace jim=ns;
int main()
{
	cout<<jim::a<<" "<<jim::str<<endl;
	system("pause");
	return 0;
}
