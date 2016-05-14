#include <iostream>
using namespace std;
class Circle
{
	private:
		int radius;
	public:
		Circle(int r){radius=r;}
		double get_area()const    //const ㄧ计 
		{
			return 3.14*radius*radius;
		}
		double get_area2()       //獶const ㄧ计 
		{
			return 3.14*radius*radius;
		}
};
int main()
{
	const Circle c1(5);
//	cout<<c1.get_area2(); 岿粇 constンノconstㄧ计 
	cout<<c1.get_area();//タ絋 Τノconst 眔ンㄏノconst ㄧ计 
}
