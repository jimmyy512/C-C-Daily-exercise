#include<iostream>
#include <array>
#include <vector>
using namespace std;
class data
{
private:
	static int generateTime;//static �ܼ� ��H�������O����O�@�ɪ� �ҥH�i�H�i��֥[
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
	data::printText();//static��Ʀb�sĶ�ɴ��ͦ� �ҥH���Υͦ���H�]��I�s
	for (int i = 0; i < 5; i++)
	{
		data *p = new data;
		p->printTime();
		delete p;
	}
	system("pause");
	return 0;
}
