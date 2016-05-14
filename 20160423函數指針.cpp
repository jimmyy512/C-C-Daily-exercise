#include <iostream>
using namespace std;
void print(int a,int b=1,int c=2,int d=3)
{
	cout<<a<<b<<c<<d<<endl;
}
int main()
{
	void (*p)(int z,int x,int c,int v)=print;
	print(1,2,3,4);
	system("pause");
	return 0;
}
