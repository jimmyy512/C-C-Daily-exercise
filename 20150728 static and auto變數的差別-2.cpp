#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=0;i<4;i++)
	{
		static int static_Num;		//static未初始化會給0值 而auto不會自動初始化為0 
		auto int auto_Num;         //若auto未初始化會指向亂數 
		auto_Num+=i;
		static_Num+=i;
		cout<<"static 的值"<<static_Num<<endl;
		cout<<"auto 的值"<<auto_Num<<endl;
	}
}
