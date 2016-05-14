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
	people jim("莊鈞宇");//預先建造結構子 就能直接初始化 
	jim.printdata();
	people hank("莊承翰");
	hank.printdata();
}
