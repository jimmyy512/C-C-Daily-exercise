#include<iostream>
#include <array>
#include <vector>
using namespace std;
class data
{
public:
	int num;
public:
	data(int num)
	{
		this->num = num;
	}
	void getdata()const //加上const 代表成員變量不能被修改
	{
		cout << num << endl;
	}
};
int main()
{

	data data_arry[5] = { data(5), data(4), data(3), data(2), data(1) };
	for (auto iterator : data_arry)
	{
		iterator.getdata(); 
	}
	cout << endl;
	data*pdata1 = new data(5);
	data*pdata2 = new data(4);
	data*pdata3 = new data(3);
	std::array<data, 3>my_array = { *pdata1, *pdata2, *pdata3 };
	for (auto s : my_array)
	{
		s.getdata();
	}
	system("pause");
	return 0;
}
