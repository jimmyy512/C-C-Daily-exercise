#include <iostream>
using namespace std;
class Lion
{
	private:
		int height;
		int weight;
	public:
		void roll(){cout<<"�q~~~"<<endl;};
		void set_height(int h){height=h;};
		void set_weight(int w){weight=w;};
		int get_height(){return height;};
		int get_weight(){return weight;};
};
int main()
{
	Lion lion1;
	lion1.roll();
	Lion *lion2=new Lion; //lion �� �гy�s�����лݭn�����@���O���� 
	lion2->set_height(50);
	lion2->set_weight(100);
	cout<<"��l�����׬�:"<<lion2->get_height()<<" �魫��:"<<lion2->get_weight()<<endl;
}
