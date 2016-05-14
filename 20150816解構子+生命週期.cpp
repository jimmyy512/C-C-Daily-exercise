#include <iostream>
using namespace std;
class demo
{
	int id;
	public:
		demo(int i)
		{
			id=i;
			cout<<"id="<<id<<" constructed"<<endl;
		}
		~demo()
		{
			cout<<"id="<<id<<" destructor"<<endl;
		}
};
demo d1(1); //全域變數 程式結束才會自動解構子 
void func()
{
	static demo d2(2);//static 是全域變數 當程式結束時 才會自動解構子 
	demo d3(3);
	cout<<"func"<<endl;
}
int main()
{
	demo d4(4);
	d4=6; //6會創造一個臨時得 類型轉換結構子 所以賦質完成後 會自動消亡 解構子 
	cout<<"main"<<endl;	
	{demo d5(5);} // { } 括弧內是一個程式區塊  也是變數的生命週期 執行完 自動解構子 
	func();
	cout<<"main ends"<<endl;
}
