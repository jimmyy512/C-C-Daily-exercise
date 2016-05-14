#include <iostream>
using namespace std;
class Car
{
private:
	char* c_player;
	char* car;
	int price;
	friend class Driver;
public:
	Car(char* _player, char* _car, int _price)
	{
		c_player = _player;
		car = _car;
		price = _price;
	}
	Car(char* _car, int _price)
	{
		c_player = { "無車主" };
		car = _car;
		price = _price;
	}
	int get_price()
	{
		return price;
	}
	void print_data()
	{
		cout << "車主人" << "\t\t" << "車型號" << "\t\t" << "價錢" << endl;
		cout << c_player << "\t\t" << car << "\t\t" << price << endl<<endl;
	}
};
class Driver
{
	private:
		char* player;
		int price;
	public:
		Driver(char* _player,int _price){ player = _player,price=_price; }
		void ModifyCar(Car& s)
		{
			s.c_player = player;
			s.price=price;
		}
};

int main()
{
	Car car1("法拉利",100);
	car1.print_data();
	cout << "有客人來買車了 你希望出的價錢是?" << endl;
	int new_price;
	cin >> new_price;
	cout << endl;
	Driver d1("蕭三峰", new_price);
	d1.ModifyCar(car1);
	car1.print_data();
	system("pause");
}

