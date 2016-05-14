#include <iostream>
using namespace std;
int main()
{
	int a=10,b=20;
	const int *p=&a;//指向常數的指針，即指針本身的值是可以改變的，但指向的內容是不能改變的;
//	*p=12;
	int * const pb=&b; //常指針，即指針本身的值是不可改變的，但指向的內容是可改變的;
	*pb=30;
//	pb=&a;
	cout<<b<<endl;
}
