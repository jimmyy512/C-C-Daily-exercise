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
	//p.go(); protected���~�ӡA�|���~�Ӫ�public�ܬ�protedted 
	p.get_car_function();
	
}
