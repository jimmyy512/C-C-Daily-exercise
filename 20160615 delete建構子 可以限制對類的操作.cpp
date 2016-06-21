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
	data(int num) = delete;//無法實例化
	data(double num)
	{
		this->num = num;
	};
	data(const data&) = default;//default 編譯器默認函數
	void getdata()const //加上const 代表成員變量不能被修改
	{
		cout << num << endl;
	}
};
int main()
{
	data d1;
	//data d2(20);錯誤 14行那邊用delete這種構照函數就不能使用
	data d2(20.1);
	data d3(d2);
	d1.getdata();
	d2.getdata();
	d3.getdata();
	system("pause");
	return 0;
}
