#include <iostream>
using namespace std;
class car
{
	private:
		static int test;
	public:
		void move()	
		{
			cout<<"car move!"<<endl;
		}
		void stop()
		{
			cout<<"car stop!"<<endl;
		}
		int get_test()
		{
			return test;
		}
};
int car::test=10;
class player:public car
{
	static int wheels;
	public:
		int get_wheels()
		{
			return wheels;
		}
		void stop() //會複寫原來繼承的函數 
		{
			cout<<"player stop!"<<endl;
		}
};
int player::wheels=20;
int main()
{
	player p1;
	p1.move();
	p1.stop();
	cout<<p1.get_test()<<endl;
	cout<<p1.get_wheels();
}
