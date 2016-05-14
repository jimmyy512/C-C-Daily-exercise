#include <iostream>
using namespace std;
class Ctest
{
	private:
		int n;
	public:
		Ctest(){n=1;}
		int Get_Value() const{return n;}
		int Get_Value(){return n*2;}
		
};
int main()
{
	const Ctest c1; //只有const對象 才能調用const成員函數 
	Ctest c2;
	cout<<c1.Get_Value()<<","<<c2.Get_Value()<<endl;
}
