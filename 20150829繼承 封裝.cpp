#include <iostream>
using namespace std;
class vehicle
{
private:
	int money;
public:
	void start()
	{
		cout << "引擎 發動!" << endl;
	}
	void stop()
	{
		cout << "引擎 關閉!" << endl;
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
		cout << "飛機 飛了!" << endl;
	}
	void stop()
	{
		cout << "飛機 降落!" << endl;
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
		cout << "跑車 開了!" << endl;
	}
	void stop()
	{
		cout << "跑車 停了!" << endl;
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
	airplane a("飛機號", 100);
	car c("法拉地",20000);
	a.start();
	a.stop();
	cout<<"此趟票價為:"<<a.airplane_getmoney()<<"元"<<endl;
	
	cout<<endl;
	
	c.start();
	c.stop();
	cout<<"此趟票價為:"<<c.car_get_money()<<"元"<<endl;
}
