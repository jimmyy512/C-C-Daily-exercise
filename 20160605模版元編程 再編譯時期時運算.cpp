#include <stdio.h> 
#include <stdlib.h> 
#include <iostream>
using namespace std;

namespace Fab
{
	template<int N>
	struct data
	{
		enum{ res = data<N - 1>::res + data<N - 2>::res };
	};
	template<>
	struct data < 1 >
	{
		enum{ res = 1 };
	};
	template<>
	struct data < 2 >
	{
		enum{ res = 1 };
	};
}
namespace totalSum
{
	template<int N>
	struct data
	{
		enum{res=N+data<N-1>::res};
	};
	template<>
	struct data<1>
	{
		enum{ res = 1};
	};
}
int totalSum_recursion(int N)
{
	if (N == 1)
		return 1;
	else
		return N + totalSum_recursion(N - 1);
}
int Fab_recursion(int N)
{
	if (N<=2)
		return 1;
	else
		return Fab_recursion(N - 1) + Fab_recursion(N - 2);
}
int main()
{
	cout <<"模版元編程求第40個費氏數列:"<<Fab::data<40>::res << endl;//再編譯時期進行計算 運行程式時 變成常量
	cout << "模版元編程求1加到500:" << totalSum::data<500>::res << endl;//再編譯時期進行計算 運行程式時 變成常量

	cout << "普通遞迴求第40個費氏數列:" << Fab_recursion(40) << endl;
	cout << "普通遞迴求1加到500:" << totalSum_recursion(500) << endl;

	
	system("pause");
}

