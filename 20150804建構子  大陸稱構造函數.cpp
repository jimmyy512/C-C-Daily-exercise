#include <iostream> 
using namespace std;
class complex
{
	private:
		double height,weight;
	public:
		complex(double h,double w);   //若沒有自己建造建構子 系統會幫你分配預設建構子 
		complex(){};
};
complex::complex(double h,double w)
{
	height=h;
	weight=w;
}
class complex2
{
	private:
		double height,weight;
	public:
		complex2(){};
};
int main()
{
//	complex a;  錯誤 沒有使用自己的初始化 
//	complex *pa=new complex;  錯誤沒有使用自己建造的建構子 
	complex b(3,4);
	complex *pb=new complex(3,4);
	complex2 a;//正確 complex 的建構子並沒有要求傳入值 所以能宣告 
	complex2 *pa=new complex2;
}

