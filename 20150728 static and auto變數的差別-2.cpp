#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=0;i<4;i++)
	{
		static int static_Num;		//static����l�Ʒ|��0�� ��auto���|�۰ʪ�l�Ƭ�0 
		auto int auto_Num;         //�Yauto����l�Ʒ|���V�ü� 
		auto_Num+=i;
		static_Num+=i;
		cout<<"static ����"<<static_Num<<endl;
		cout<<"auto ����"<<auto_Num<<endl;
	}
}
