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
		
		static int count; //�ثe�Ͳ��� 
		static int Max_car;//�Ͳ��W�� 
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
				cout<<"�u�t�Ͳ��u�w�F�W��,�]�����A�Ͳ�"<<endl;
				return;//�����^�� 
			}
			c[count++]=new car(cname,price);
		}
		factory(char* n)
		{
			factory_name=n;
		}
		void show_alllist()
		{
			cout<<factory_name<<"�Ͳ��M��"<<endl;
			cout<<"-----------------------------"<<endl;
			for(i=0;i<count;i++)
				cout<<"���W��:"<<c[i]->get_car_name()<<"\t"<<"������:"<<c[i]->get_car_price()<<endl;
		}
		
};
int factory::count=0;
int factory::Max_car=3; //�]�w�̤j�Ͳ��u��3
int main()
{
	factory f1("�Ĥ@�u�t");
	f1.insert_car("�k�ԧQ",100);
	f1.insert_car("�W�]��",200);
	f1.insert_car("�d�B��",300);
//	f1.insert_car("�N����",400);
	f1.show_alllist();
	
	driver d1("���s�p",999);

}
