#include <iostream>
using namespace std;
int main()
{
	int obj=12,j;
	int &r=obj;
	r=15;
	cout<<obj<<endl;
//	&p=j;     �w�g�ѦҤFobj�ܼ� ����A�h�ѦҨ�L�ܼ�
	int array[3]={1,2,3};
	int *pointer=array;
	int * &rarray=pointer; //�n�ϥΫ��аѦ� �ᤩ���ȥ��������w 
	int i;
	for(i=0;i<3;i++)
	{
		cout<<*(rarray+i)<<endl;
	}
	
	
	
	
}
