#include <iostream>
#include <cstring>
using namespace std;
class member
{
	char *pname;
	void show1()
	{
		cout<<"show1:"<<pname<<endl;
	}
	protected:
		void show2()
		{
			cout<<"show2:"<<pname<<endl;
		}
	public:
		member(char* n)
		{
			pname=new char(strlen(n));
			strcpy(pname,n);
		}
		void show3()
		{
			cout<<"show3:"<<pname<<endl;
		}
		void printdata()
		{
			show1();
			show2();
			show3();
		}
};
int main()
{
	member jim("���v�t");
	cout<<"�z�L���������ϥ�private�Mprotected ���������"<<endl;
	jim.printdata();
	cout<<"�u��public�o�����i�H�����Q�ϥ�"<<endl;
//	jim.show1();���~ private
//	jim.show2();protected �]���ઽ���ե�
	jim.show3(); 
	
}
