#include <iostream>
using namespace std;
//����new delete 
class Man
{
public:
	Man()
	{
		cout<<"man�غc"<<endl; 
	}
	~Man()
	{
		cout<<"man�Ѻc"<<endl;
	}
	static void* operator new(size_t size)
	{
		cout<<"��H�Ы�"<<endl;
		Man* p=::new Man;
		return p; 
	}
	static void operator delete(void *p)
	{
		cout<<"��H�R��"<<endl;
		::delete p; 
	}
};
int main()
{
	Man *man=new Man;
	delete man;
	return 0;
}
