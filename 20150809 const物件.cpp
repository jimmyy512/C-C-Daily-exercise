#include <iostream>
using namespace std;
class Circle
{
	private:
		int radius;
	public:
		Circle(int r){radius=r;}
		double get_area()const    //const ��� 
		{
			return 3.14*radius*radius;
		}
		double get_area2()       //�Dconst ��� 
		{
			return 3.14*radius*radius;
		}
};
int main()
{
	const Circle c1(5);
//	cout<<c1.get_area2(); ���~ const�ŧi������u���const��ƤW 
	cout<<c1.get_area();//���T �u����const �ŧi�o����i�H�ϥ�const ��� 
}
