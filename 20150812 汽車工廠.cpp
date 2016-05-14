#include <iostream>
using namespace std;
int i;
class driver
{
	private:
		char* player;
		int new_price;
	public:
		driver(char* _player,int _new_price)
		{
			player=_player;
			new_price=_new_price;
		}
};
class factory
{
	private:
		char* factory_name;
		
		friend class driver;
		
		static int count; //目前生產數 
		static int Max_car;//生產上限 
		class car
		{
			private:
				char* car_name;
				int car_price;
			public:
				car(char* _car_name,int _price)
				{
					car_name=_car_name;
					car_price=_price;
				}
				char* get_car_name(){return car_name;}
				int get_car_price(){return car_price;}
		};
		car* c[10];
	public:
		void insert_car(char* cname,int price)
		{
			if(count==Max_car) 
			{
				cout<<"工廠生產線已達上限,因此不再生產"<<endl;
				return;//直接回傳 
			}
			c[count++]=new car(cname,price);
		}
		factory(char* n)
		{
			factory_name=n;
		}
		void show_alllist()
		{
			cout<<factory_name<<"生產清單"<<endl;
			cout<<"-----------------------------"<<endl;
			for(i=0;i<count;i++)
				cout<<"車名為:"<<c[i]->get_car_name()<<"\t"<<"價錢為:"<<c[i]->get_car_price()<<endl;
		}
		
};
int factory::count=0;
int factory::Max_car=3; //設定最大生產線為3
int main()
{
	factory f1("第一工廠");
	f1.insert_car("法拉利",100);
	f1.insert_car("超跑車",200);
	f1.insert_car("卡丁車",300);
//	f1.insert_car("吉普車",400);
	f1.show_alllist();
	
	driver d1("蕭山峰",999);

}
