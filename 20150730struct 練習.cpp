#include <iostream>
#include <cstring> 
using namespace std;
struct Status
{
	int age;
	int health;
	char Name[5];	
	char job[10];
	char test;
}character1;
struct Pointer_Status
{
	int age;
	int health;
	char* Name[5];
	char* job[10];
};
int main()
{
//	character1={18,"jim","Master"}; �r��}�C���� ������l�� 
	character1.test='A';//�Ychar�����D�}�C  �o�]�ઽ����l�� 
	cout<<"test:"<<character1.test<<endl;
	character1={18,100};
	strcpy(character1.Name,"jim");  //�r��}�C��l�Ƥ�k 
	strcpy(character1.job,"master");
	cout<<"�~��:"<<character1.age<<endl;
	cout<<"��q:"<<character1.health<<endl;
	cout<<"�m�W:"<<character1.Name<<endl;
	cout<<"¾�~:"<<character1.job<<endl;
	
	Pointer_Status character2;  //�t���ŧi���c�ܼ� 
	character2={20,200};
	*character2.Name="hank";     //�խY���c�����O�r����w �N�ઽ����l�� 
	*character2.job="witcher";
	cout<<endl;
	cout<<"�~��:"<<character2.age<<endl;
	cout<<"��q:"<<character2.health<<endl;
	cout<<"�m�W:"<<*character2.Name<<endl;
	cout<<"¾�~:"<<*character2.job<<endl;
}
