#include <iostream>
using namespace std;
class Car
{
	public:
		void go()
		{
			cout<<"Car go!"<<endl;
		}	
};
class Player:private Car
{
	Car c;
	public:
		void call_Car_function()
		{
			c.go();
		}
};
int main()
{
	Car c;
	Player p;
	c.go();
//	p.go();
	p.call_Car_function();
}
