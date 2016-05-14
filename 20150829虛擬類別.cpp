#include <iostream>
using namespace std;
class vehicle
{
	public:
		void start()
		{
			cout<<"vehicle start!"<<endl;
		}
		void shut_down()
		{
			cout<<"shut_down stop!"<<endl;
		}
};
class aircraft:virtual public vehicle //virtual 宣告基礎類別 不加virtual會錯誤 
{
	public:
		void fly()
		{
			cout<<"aircraft fly!"<<endl;
		}	
		void land()
		{
			cout<<"aircraft land!"<<endl;
		}
};
class car:virtual public vehicle //virtual 宣告基礎類別 不加virtual會錯誤 
{
	public:
		void forward()
		{
			cout<<"car forward!"<<endl;
		}
		void fall_back()
		{
			cout<<"car fall back!"<<endl;
		}
};
class aircar:public aircraft,public car
{
};
int main()
{
	aircar c1;
	c1.start();
	c1.fly();
	c1.forward();
	c1.fall_back();
	c1.land();
	c1.shut_down();
	
	
	
}
