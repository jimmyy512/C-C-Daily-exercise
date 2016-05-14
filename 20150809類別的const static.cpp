#include <iostream>
using namespace std;
class Circle
{
	private:
		const static double PI;
		static int counter;
		int radius;
	public:
		Circle(int r)
		{
			radius=r;
			counter++;
		}
		double Get_Area()
		{
			return PI*radius*radius;
		}
		int Get_Counter()
		{
			return counter;
		}
};
const double Circle::PI=3.1415926535;
int Circle::counter=0;
int main()
{
	Circle c1(3);
	cout<<c1.Get_Area()<<endl;
	Circle c2(5);
	cout<<c2.Get_Area()<<endl;
	cout<<"由c1取出來的counter:"<<c1.Get_Counter()<<endl;
	cout<<"由c2取出來的counter:"<<c2.Get_Counter()<<endl;
}
