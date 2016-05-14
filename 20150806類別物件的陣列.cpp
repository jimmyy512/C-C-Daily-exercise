#include <iostream>
#include <cstring>
using namespace std;
class Member
{
	private:
		char* pname;
		int level;
		static int count1;
		static int count2;
	public:
		Member()
		{
			pname=NULL;
			level=0;
			count1++;
			cout<<"呼叫預設建構子:"<<count1<<"次"<<endl;
		}
		Member(char* pname,int level)
		{
			this->pname=pname;
			this->level=level;
			count2++;
			cout<<"呼叫有引數的建構子:"<<count2<<"次"<<endl; 
		}
		Member& set_data(char *n,int l)
		{
			pname=new char[strlen(n)];
			strcpy(pname,n);
			level=l;
			return *this;
		}
		void print_data(){cout<<pname<<","<<level<<endl;}
};
int Member::count1=0; //初始化static變數 
int Member::count2=0;
int main()
{
	Member array1[3];
	int num=sizeof(array1)/sizeof(array1[0]);
	cout<<"array1物件陣列有"<<num<<"個陣物件"<<endl;
	array1[0].set_data("Ken",18).print_data();
	array1[1].set_data("Malisa",14).print_data();
	array1[2].set_data("Michael",19).print_data();
	Member p2("jim",18);
	Member p3;
}

