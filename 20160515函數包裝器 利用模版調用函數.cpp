#include <iostream>
#include <array>
#include <functional>
using namespace std;

template <typename var, typename func>
var run(var v, func f)
{
	return f(v);
}
template<typename var, typename var2, typename func>
var run(var v1, var2 v2, func f)
{
	return f(v1, v2);
}

int add(int a, int b)
{
	return a + b;
}
int main()//visual studio 2013¤U¥i½sÄ¶ 
{
	function<int(int)>square = [](int v)
	{
		return v*v;
	};
	function<int(int)>Double = [](int v)
	{
		return v * 2;
	};
	function<int(int, int)>adder = add;
	cout << run(6, square) << endl;
	cout << run(8, Double) << endl;
	cout << run(1, 2, adder) << endl;
	system("pause");
	return 0;
}
