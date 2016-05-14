#include <iostream>
using namespace std;
class Lion
{
	private:
		int height;
		int weight;
	public:
		void roll(){cout<<"吼~~~"<<endl;};
		void set_height(int h){height=h;};
		void set_weight(int w){weight=w;};
		int get_height(){return height;};
		int get_weight(){return weight;};
};
int main()
{
	Lion lion1;
	lion1.roll();
	Lion *lion2=new Lion; //lion 類 創造新的指標需要給予一塊記憶體 
	lion2->set_height(50);
	lion2->set_weight(100);
	cout<<"獅子的高度為:"<<lion2->get_height()<<" 體重為:"<<lion2->get_weight()<<endl;
}
