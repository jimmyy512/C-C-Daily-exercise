#include <iostream>
using namespace std;
void add();
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		add();	
	}
}
void add()
{
	static int static_Num=0;
	auto int auto_Num=0;
	static_Num++;
	auto_Num++;
	cout<<"�R�A�ܼ�static:"<<static_Num<<endl; //static�ܼƬO��{�������� �~�|���^�O���� 
	cout<<"�۰��ܼ�auto:"<<auto_Num<<endl; //auto�ܼƬO�J��{} �N�|���^�O���� 
}
