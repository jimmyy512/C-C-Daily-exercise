#include <iostream>
using namespace std;

class USD;
class NTD
{
		double NT_exchange_rate;//���1�x���i�H�ﴫ�o�������B
	public:
		friend istream& operator >>(istream& in, NTD& money);
		NTD()
		{
			NT_exchange_rate = 0.0288268;
		}
		operator USD();
};
class USD
{
		double US_exchange_rate;
	public:
		friend ostream& operator <<(ostream& out, USD& money);
		USD()
		{
			US_exchange_rate = 30;
		}
		USD(double tmp)
		{
			US_exchange_rate = tmp;
		}
};
istream& operator >>(istream& in, NTD& money)
{
	cout << "�п�J1���x��=�h�֬���:";
	in >> money.NT_exchange_rate;
	return in;
}
ostream& operator <<(ostream& out, USD& money)
{
	out << money.US_exchange_rate;
	return out;
}
NTD::operator USD()
{
	double US_exchange_rate=1/NT_exchange_rate;
	return (USD(US_exchange_rate));
	
}
int main()
{
	USD us_dollar,test;
	NTD nt_dollar,test2;
	us_dollar=nt_dollar;  //us_dollar=USD(nt_dollar;)
	test=test2;
	cout<<endl;
	cout<<"1������="<<us_dollar<<endl;
	cout<<"1������="<<test;
	
}
