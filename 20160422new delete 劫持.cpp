#include <iostream>
using namespace std;
//重載new delete 
class Man
{
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
		cout<<"對象創建"<<endl;
		Man* p=::new Man;
		return p; 
	}
	static void operator delete(void *p)
	{
		cout<<"對象刪除"<<endl;
		::delete p; 
	}
};
int main()
{
	Man *man=new Man;
	delete man;
	return 0;
}
