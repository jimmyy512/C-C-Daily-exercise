#include <iostream>
#include <functional>
using namespace std;
using namespace std::placeholders;
class myclass
{
public:
	void add(int a)
	{
		cout << a << endl;
	}
	void add2(int a,int b)
	{
		cout << a+b << endl;
	}

};
int main()
{
	myclass my;
	auto func = bind(&myclass::add, &my, _1);
	auto func2 = bind(&myclass::add2, &my, _1,_2);
	func(10);
	func2(10,20);
	system("pause");
	return 0;
}
