#include <iostream>
using namespace std;
class Circle
{
	private:
		const static double PI;
		int radius;
	public:
		static int counter;
		Circle(int r)
		{
			radius=r;
			counter++;
		}
		int get_counter()
		{
			return counter;
		}
};
int Circle::counter=0;      //��l�� 
const double Circle::PI=3.14;
int main()
{
	Circle::counter=5;    //���ε����A
	cout<<Circle::counter<<endl;
	Circle::counter=7;
	cout<<Circle::counter<<endl;
	Circle c1(3);
	cout<<Circle::counter<<endl; 
}
