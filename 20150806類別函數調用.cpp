#include "20150806.h"
#include <cstring>
Man::Man(char *n,int a)
{
	name=new char[strlen(n)];
	strcpy(name,n);
	age=a;
}
void Man::set_age(int a)
{
	age=a;
}
void Man::set_name(char *n)
{
	strcpy(name,n);
}
int Man::get_age() const
{
	return age;
}
char* Man::get_name() const
{
	return name;
}
int main()
{
	Man jim("���v�t",18);
//	cout<<jim.get_name()<<"\t"<<jim.get_age()<<endl; ���L��k 
	jim.printdata();
	Man *hank=new Man("�ӿ�",14);
	jim.set_age(19);
	jim.printdata();
	hank->printdata();  //���w�ܼƤ@�w�n��-> 
	hank->set_age(15);
	hank->printdata(); 
	delete hank; //�R������hank 
	
}
