#include <iostream>
using namespace std;
int main()
{
	int a=10,b=20;
	const int *p=&a;//���V�`�ƪ����w�A�Y���w�������ȬO�i�H���ܪ��A�����V�����e�O������ܪ�;
//	*p=12;
	int * const pb=&b; //�`���w�A�Y���w�������ȬO���i���ܪ��A�����V�����e�O�i���ܪ�;
	*pb=30;
//	pb=&a;
	cout<<b<<endl;
}
