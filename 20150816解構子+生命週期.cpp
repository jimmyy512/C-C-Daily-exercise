#include <iostream>
using namespace std;
class demo
{
	int id;
	public:
		demo(int i)
		{
			id=i;
			cout<<"id="<<id<<" constructed"<<endl;
		}
		~demo()
		{
			cout<<"id="<<id<<" destructor"<<endl;
		}
};
demo d1(1); //�����ܼ� �{�������~�|�۰ʸѺc�l 
void func()
{
	static demo d2(2);//static �O�����ܼ� ��{�������� �~�|�۰ʸѺc�l 
	demo d3(3);
	cout<<"func"<<endl;
}
int main()
{
	demo d4(4);
	d4=6; //6�|�гy�@���{�ɱo �����ഫ���c�l �ҥH��觹���� �|�۰ʮ��` �Ѻc�l 
	cout<<"main"<<endl;	
	{demo d5(5);} // { } �A�����O�@�ӵ{���϶�  �]�O�ܼƪ��ͩR�g�� ���槹 �۰ʸѺc�l 
	func();
	cout<<"main ends"<<endl;
}
