#include <iostream>
using namespace std;
//重載new delete 
class Man
{
public:
	static int count;
public:
	Man()
	{
		cout<<"man建構"<<endl; 
	}
	~Man()
	{
		cout<<"man解構"<<endl;
	}
	static void* operator new(size_t size)
	{
		count++;
		cout<<"對象創建"<<endl;
		Man* p=::new Man;
		return p; 
	}
	static void operator delete(void *p)
	{
		count--;
		cout<<"對象刪除"<<endl;
		::delete p; 
	}
};
int Man::count=0;
int main()
{
	Man *man=new Man;
	Man *man2=new Man;
	Man *man3=new Man;
	delete man;
	cout<<"總共創建"<<Man::count<<"個class"<<endl;
	return 0;
}
