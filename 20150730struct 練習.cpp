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
//	character1={18,"jim","Master"}; 字串陣列不能 直接初始化 
	character1.test='A';//若char類型非陣列  卻也能直接初始化 
	cout<<"test:"<<character1.test<<endl;
	character1={18,100};
	strcpy(character1.Name,"jim");  //字串陣列初始化方法 
	strcpy(character1.job,"master");
	cout<<"年齡:"<<character1.age<<endl;
	cout<<"血量:"<<character1.health<<endl;
	cout<<"姓名:"<<character1.Name<<endl;
	cout<<"職業:"<<character1.job<<endl;
	
	Pointer_Status character2;  //另類宣告結構變數 
	character2={20,200};
	*character2.Name="hank";     //倘若結構成員是字串指針 就能直接初始化 
	*character2.job="witcher";
	cout<<endl;
	cout<<"年齡:"<<character2.age<<endl;
	cout<<"血量:"<<character2.health<<endl;
	cout<<"姓名:"<<*character2.Name<<endl;
	cout<<"職業:"<<*character2.job<<endl;
}
