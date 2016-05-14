#include <iostream>
using namespace std;
class Player
{
	private:
		int age;
		char* pname;
		static int count1;
		static int count2;
	public:
		Player()
		{
			age=0;
			pname=NULL;
			count1++;
			cout<<"呼叫預設建構子:"<<count1<<"次"<<endl;
		}
		Player(char* pname,int age)
		{
			this->pname=pname;
			this->age=age;
			count2++;
			cout<<"呼叫有引數建構子:"<<count2<<"次"<<endl;
		}
		Player& set_data(char* _pname,int _age)
		{
			pname=_pname;
			age=_age;
			return *this;
		}
		void print_data()
		{
			cout<<pname<<","<<age<<endl;
		}
};
int Player::count1=0;
int Player::count2=0;
int main()
{
	Player p1[3];
	int num=sizeof(p1)/sizeof(p1[0]),i;
	p1[0].set_data("jim",18);
	p1[1].set_data("hank",15);
	p1[2].set_data("jack",19);
	Player* p2[3]={NULL,NULL,NULL};//第一種指向p1得方式 
	Player* p3[3]={&p1[0],&p1[1],&p1[2]};//第二種指向p1的方式 
	Player* p4[3]={new Player("John",15),new Player("Marry",17),new Player("Bill",19)};//自己另類初始化的方式 
	for(i=0;i<num;i++)
	{
		p2[i]=&p1[i];
		p2[i]->print_data();
		p3[i]->print_data();
		p4[i]->print_data();
	}
	
	
	
}
