#include <iostream>
using namespace std;
class Dollar
{
		double current_usd;
		double money_rate;
		double current_twd;
	public:
		friend ostream& operator <<(ostream& out,Dollar& money);
		friend istream& operator >>(istream& in, Dollar& money);
		Dollar operator =(Dollar& money);
		Dollar()
		{
			current_usd=1;
			current_twd=0;
			money_rate=30;
		}

};
istream& operator >>(istream& in, Dollar& money)
{
	cout << "請輸入一美金等於多少台幣:";
	in >> money.money_rate;
	cout << "請問你身上有多少美金?";
	in >> money.current_usd;
	return in;
}
ostream& operator <<(ostream& out,Dollar& money)
{
	out<<money.current_twd;
}
Dollar Dollar::operator =(Dollar& money)  //多載運算子函數 
{
	cout<<"執行多載運算子函數!"<<endl;
	current_twd=money.current_usd*money.money_rate;
	return *this;
}
int main()
{
	Dollar TWD,USD;
	cin >> USD;
	TWD=USD; //執行多載運算子函數 
	cout<<"您可以兌換成"<<TWD<<"元台幣!";
}
