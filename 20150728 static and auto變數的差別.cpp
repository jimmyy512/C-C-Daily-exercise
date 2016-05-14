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
	cout<<"靜態變數static:"<<static_Num<<endl; //static變數是當程式結束時 才會收回記憶體 
	cout<<"自動變數auto:"<<auto_Num<<endl; //auto變數是遇到{} 就會收回記憶體 
}
