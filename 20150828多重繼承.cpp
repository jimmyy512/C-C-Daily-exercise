#include <iostream>
using namespace std;
class Aircraft
{
	public:
		void fly()
		{
			cout<<"Aircraft fly!"<<endl;
		}
		void land()
		{
			cout<<"Aircraft land"<<endl;
		}
};
class Car
{
	public:
		void start()
		{
			cout<<"car start!"<<endl;
		}
		void stop()
		{
			cout<<"car stop"<<endl;
		}
};
class Aircar:public Car,public Aircraft
{
	char* str;
	public:
		Aircar(char* _str)
		{
			str=_str;
		}
		char* get_aircar_name()
		{
			return str;
		}
};
int main()
{
	Aircar c1("½Ä¾W¸¹");
	cout<<c1.get_aircar_name()<<endl;
	c1.start();
	c1.fly();
	c1.land();
	c1.stop();
	
}
