#include <iostream>
using namespace std;
class Complex
{
	public:
		double real,image;
		Complex(double r,double i) //���c�l 
		{
			real=r;
			image=i;
		}
		Complex(int i) //�����ഫ���c�l 
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
	c1=9;//9�۰��ഫ���@���{�ɱocomplex��H 
	cout<<c1.real<<","<<c1.image<<endl;
}
