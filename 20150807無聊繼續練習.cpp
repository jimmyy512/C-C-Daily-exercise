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
	Member jim("莊鈞宇",18,"台北市北投區");
	Member hank("莊承翰",14,"高雄市高譚市");
	jim.set_age(19);
	jim.printdata();
	hank.set_age(18);
	cout<<"莊承翰目前的年齡為:"<<hank.get_age();
}
