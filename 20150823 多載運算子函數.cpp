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
	cout << "�п�J�@��������h�֥x��:";
	in >> money.money_rate;
	cout << "�аݧA���W���h�֬���?";
	in >> money.current_usd;
	return in;
}
ostream& operator <<(ostream& out,Dollar& money)
{
	out<<money.current_twd;
}
Dollar Dollar::operator =(Dollar& money)  //�h���B��l��� 
{
	cout<<"����h���B��l���!"<<endl;
	current_twd=money.current_usd*money.money_rate;
	return *this;
}
int main()
{
	Dollar TWD,USD;
	cin >> USD;
	TWD=USD; //����h���B��l��� 
	cout<<"�z�i�H�I����"<<TWD<<"���x��!";
}
