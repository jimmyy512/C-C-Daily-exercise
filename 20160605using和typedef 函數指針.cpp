#include <stdio.h> 
#include <stdlib.h> 
#include <iostream>
using namespace std;
int add(int a, int b)
{
	return a + b;
}
typedef int(*ADD)(int a, int b);
using FUNC = int(*)(int a, int b);
int main()
{
	ADD p=add;
	std::cout << p(1, 5)<<endl;
	FUNC func= add;
	cout << func(2, 3)<<endl;
	system("pause");
}

