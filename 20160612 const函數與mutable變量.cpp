#include<iostream>
using namespace std;
class data
{
public:
	int a, b, c;
	mutable int d;//mutable不會受到const函數影響 而不能被修改
public:
	data(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = 100;
	}
	void getdata()const //加上const 代表成員變量不能被修改
	{
		//this->a = 10;//error! 
		this->d = 999;
		cout << a<<b<<c<<endl;
		cout << d << endl;
	}
};
int main(){
	data d1(1, 2, 3);
	d1.getdata();
	system("pause");

	return 0;
}
