#include<iostream>
using namespace std;
class data
{
public:
	int a, b, c;
	mutable int d;//mutable���|����const��Ƽv�T �Ӥ���Q�ק�
public:
	data(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = 100;
	}
	void getdata()const //�[�Wconst �N�����ܶq����Q�ק�
	{
		//this->a = 10;//error! 
		this->d = 999;
		cout << a<<b<<c<<endl;
		cout << d << endl;
	}
};
int main(){
	data d1(1, 2, 3);
	d1.getdata();
	system("pause");

	return 0;
}
