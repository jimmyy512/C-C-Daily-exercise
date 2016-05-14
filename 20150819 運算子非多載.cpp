#include <iostream>
using namespace std;
class Complex
{
	int a, b;
public:
	Complex(int _a = 0, int _b = 0)
	{
		a = _a;
		b = _b;
	}
	Complex complex_add(Complex& c2)
	{
		Complex c;
		c.a = a + c2.a;
		c.b = b + c2.b;
		return c;
	}
	void print_data()
	{
		cout << a << "," << b << endl;
	}
};
int main()
{
	Complex c1(1, 2), c2(3, 4), c3;
	c3 = c1.complex_add(c2);
	c3.print_data();
	
}
