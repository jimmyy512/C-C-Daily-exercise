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
		Member& set_age(int _age){age=_age;return *this;}   //�^�� �Omember���A���Ѧ� 
		
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
	Member jim("���v�t",18,"�x�_���_���");
	printf("%p\n",&jim);
	printf("%p\n",&jim.set_age(20));
//	jim.printdata();
//	jim.set_age(20).printdata();
	jim.set_age(10).printdata();
	cout<<"Member��������j�p��:"<<sizeof(Member)<<"byte"<<endl;
	cout<<"set_age���(Member &)���j�p:"<<sizeof(jim.set_age(20))<<endl;//��class���^�ǼƬOclass�o�Ѧ� ��������class
}
