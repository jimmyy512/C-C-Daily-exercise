#include <iostream>
using namespace std;
class vehicle
{
private:
	int money;
public:
	void start()
	{
		cout << "���� �o��!" << endl;
	}
	void stop()
	{
		cout << "���� ����!" << endl;
	}
	void set_money(int m)
	{
		money = m;
	}
	int get_money()
	{
		return money;
	}
};
class airplane :public vehicle
{
private:
	char* airplane_name;
public:
	void start()
	{
		cout << "���� ���F!" << endl;
	}
	void stop()
	{
		cout << "���� ����!" << endl;
	}
	airplane(char* name, int _money)
	{
		airplane_name = name;
		set_money(_money);
	}
	int airplane_getmoney()
	{
		return get_money();
	}
};
class car :public vehicle
{
private:
	char* car_name;
public:
	void start()
	{
		cout << "�]�� �}�F!" << endl;
	}
	void stop()
	{
		cout << "�]�� ���F!" << endl;
	}
	car(char* name,int _money)
	{
		car_name=name;
		set_money(_money);
	}
	int car_get_money()
	{
		return get_money();
	}
};
int main()
{
	airplane a("������", 100);
	car c("�k�Ԧa",20000);
	a.start();
	a.stop();
	cout<<"���벼����:"<<a.airplane_getmoney()<<"��"<<endl;
	
	cout<<endl;
	
	c.start();
	c.stop();
	cout<<"���벼����:"<<c.car_get_money()<<"��"<<endl;
}
