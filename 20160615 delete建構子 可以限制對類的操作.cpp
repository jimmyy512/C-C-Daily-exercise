#include<iostream>
#include <array>
#include <vector>
using namespace std;
class data
{
public:
	double num;
public:
	data()
	{
		num = 10;
	};
	data(int num) = delete;//�L�k��Ҥ�
	data(double num)
	{
		this->num = num;
	};
	data(const data&) = default;//default �sĶ���q�{���
	void getdata()const //�[�Wconst �N�����ܶq����Q�ק�
	{
		cout << num << endl;
	}
};
int main()
{
	data d1;
	//data d2(20);���~ 14�樺���delete�o�غc�Ө�ƴN����ϥ�
	data d2(20.1);
	data d3(d2);
	d1.getdata();
	d2.getdata();
	d3.getdata();
	system("pause");
	return 0;
}
