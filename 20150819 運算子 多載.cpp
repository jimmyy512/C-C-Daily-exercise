#include <iostream>
using namespace std;
class Complex 
{
	int a,b;
	public:
		Complex(int _a=0,int _b=0)
		{
			a=_a;
			b=_b;
		}
		Complex operator+(Complex d)
		{
			return Complex(a+d.a,b+d.b); //单基 this->a+d.a,this->b+d.b 
		}
		void print_data()
		{
			cout<<a<<","<<b<<endl;
		}
};
int main()
{
	Complex c1(1,2),c2(3,4),c3;
	c3=c1+c2; //单基c3=c1.operator(c2) 
	c3.print_data();
	
}
