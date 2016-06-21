#include<iostream>
#include <array>
#include <vector>
using namespace std;
class data
{
private:
	static int generateTime;//static 變數 對象之間的記憶體是共享的 所以可以進行累加
public:
	static void printText()
	{
		cout << "HelloWorld" << endl;
	}
	data()
	{
		generateTime++;
	}
	void printTime()
	{
		cout << generateTime << endl;
	}
};
int data::generateTime = 0;
int main()
{
	data::printText();//static函數在編譯時期生成 所以不用生成對象也能呼叫
	for (int i = 0; i < 5; i++)
	{
		data *p = new data;
		p->printTime();
		delete p;
	}
	system("pause");
	return 0;
}
