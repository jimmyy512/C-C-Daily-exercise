#include <iostream>
#include <cstring>
using namespace std;
class member
{
	char *pname;
	void show1()
	{
		cout<<"show1:"<<pname<<endl;
	}
	protected:
		void show2()
		{
			cout<<"show2:"<<pname<<endl;
		}
	public:
		member(char* n)
		{
			pname=new char(strlen(n));
			strcpy(pname,n);
		}
		void show3()
		{
			cout<<"show3:"<<pname<<endl;
		}
		void printdata()
		{
			show1();
			show2();
			show3();
		}
};
int main()
{
	member jim("莊鈞宇");
	cout<<"透過介面間接使用private和protected 的成員函數"<<endl;
	jim.printdata();
	cout<<"只有public得成員可以直接被使用"<<endl;
//	jim.show1();錯誤 private
//	jim.show2();protected 也不能直接調用
	jim.show3(); 
	
}
