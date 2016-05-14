#include <iostream>
using namespace std;
class Complex
{
	public:
		double real,image;
		Complex(double r,double i) //結構子 
		{
			real=r;
			image=i;
		}
		Complex(int i) //類型轉換結構子 
		{
			real=i;
			image=0;
			cout<<"Intconstructor called"<<endl;
		}
};
int main()
{
	Complex c1(3,4);
	Complex c2=8; 
	c1=9;//9自動轉換成一個臨時得complex對象 
	cout<<c1.real<<","<<c1.image<<endl;
}
