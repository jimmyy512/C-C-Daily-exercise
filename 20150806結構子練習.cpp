#include <iostream>
#include <cstring>
using namespace std;
class People
{
	private:
		char* pname;
		int age;
		char* addres;
	public:
		People(char* pname,int age,char* addres);
		void printdata();
};
People::People(char* pname,int age,char* addres)
{
	this->pname=new char[strlen(pname)];
	strcpy(this->pname,pname);
	this->age=age;
	this->addres=new char[strlen(addres)];
	strcpy(this->addres,addres);
}
void People::printdata ()
{
	cout<<pname<<","<<age<<","<<addres<<endl;
}
int main()
{
	People jim("���v�t",18,"�x�_���_���");
	jim.printdata();
}
