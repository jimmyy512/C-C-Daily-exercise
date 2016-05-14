#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
class Member
{
	char* pname;
	int age;
	char* addres;
	Member* next_member;
	public:
		Member(char* pname,int age,char* addres);
		
//		void set_age(int _age){age=_age;};
		Member& set_age(int _age){age=_age;return *this;}   //回傳 是member型態的參考 
		
		int get_age(){return age;}
		void printdata();
};
Member::Member(char* _pname,int _age,char* _addres)
{
	pname=new char[strlen(_pname)];
	strcpy(pname,_pname);
	age=_age;
	addres=new char[strlen(_addres)];
	strcpy(addres,_addres);
}
void Member::printdata()
{
	cout<<pname<<","<<age<<","<<addres<<endl;
}
int main()
{
	Member jim("莊鈞宇",18,"台北市北投區");
	printf("%p\n",&jim);
	printf("%p\n",&jim.set_age(20));
//	jim.printdata();
//	jim.set_age(20).printdata();
	jim.set_age(10).printdata();
	cout<<"Member整個類的大小為:"<<sizeof(Member)<<"byte"<<endl;
	cout<<"set_age函數(Member &)的大小:"<<sizeof(jim.set_age(20))<<endl;//當class內回傳數是class得參考 等價於整個class
}
