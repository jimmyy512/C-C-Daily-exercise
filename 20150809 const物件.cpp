#include <iostream>
using namespace std;
class Circle
{
	private:
		int radius;
	public:
		Circle(int r){radius=r;}
		double get_area()const    //const 函數 
		{
			return 3.14*radius*radius;
		}
		double get_area2()       //非const 函數 
		{
			return 3.14*radius*radius;
		}
};
int main()
{
	const Circle c1(5);
//	cout<<c1.get_area2(); 錯誤 const宣告的物件只能用const函數上 
	cout<<c1.get_area();//正確 只有用const 宣告得物件可以使用const 函數 
}
