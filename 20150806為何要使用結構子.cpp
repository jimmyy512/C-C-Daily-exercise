#include <iostream>
#include <cstring>
using namespace std;
class people
{
	private:
		char* pname;
	public:
		people(char* n)
		{
			pname=new char[strlen(n)];
			strcpy(pname,n);
		}
		void printdata()
		{
			cout<<pname<<endl;
		}
};
int main()
{
	people jim("���v�t");//�w���سy���c�l �N�ઽ����l�� 
	jim.printdata();
	people hank("���ӿ�");
	hank.printdata();
}
