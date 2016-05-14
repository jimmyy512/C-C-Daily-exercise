#include <iostream>
#include <cstring>
using namespace std;
class Member
{
	char* pname;
	int age;
	char* addres;
	public:
		Member(char* pname,int age,char* addres);
		void printdata();
		void set_age(int _age){age=_age;}
		int get_age(){return age;}
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
	Member hank("���ӿ�",14,"���������ӥ�");
	jim.set_age(19);
	jim.printdata();
	hank.set_age(18);
	cout<<"���ӿ��ثe���~�֬�:"<<hank.get_age();
}
