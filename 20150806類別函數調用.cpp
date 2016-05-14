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
	Man jim("莊鈞宇",18);
//	cout<<jim.get_name()<<"\t"<<jim.get_age()<<endl; 打印方法 
	jim.printdata();
	Man *hank=new Man("承翰",14);
	jim.set_age(19);
	jim.printdata();
	hank->printdata();  //指針變數一定要用-> 
	hank->set_age(15);
	hank->printdata(); 
	delete hank; //刪除指標hank 
	
}
