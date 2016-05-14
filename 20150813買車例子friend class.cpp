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
		c_player = { "�L���D" };
		car = _car;
		price = _price;
	}
	int get_price()
	{
		return price;
	}
	void print_data()
	{
		cout << "���D�H" << "\t\t" << "������" << "\t\t" << "����" << endl;
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
	Car car1("�k�ԧQ",100);
	car1.print_data();
	cout << "���ȤH�ӶR���F �A�Ʊ�X�������O?" << endl;
	int new_price;
	cin >> new_price;
	cout << endl;
	Driver d1("���T�p", new_price);
	d1.ModifyCar(car1);
	car1.print_data();
	system("pause");
}

