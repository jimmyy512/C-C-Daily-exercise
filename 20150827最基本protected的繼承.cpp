#include <iostream> 
using namespace std;
class car
{
	public:
		void go()
		{
			cout<<"car go!"<<endl;
		}
};
class player:protected car
{
	car c;
	public:
	void get_car_function()
	{
		c.go();
	}
};
int main()
{
	car c;
	player p;
	c.go();
	//p.go(); protected的繼承，會使繼承的public變為protedted 
	p.get_car_function();
	
}
