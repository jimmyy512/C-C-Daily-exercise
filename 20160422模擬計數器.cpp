#include <iostream>
using namespace std;
//����new delete 
class Man
{
public:
	static int count;
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
		count++;
		cout<<"��H�Ы�"<<endl;
		Man* p=::new Man;
		return p; 
	}
	static void operator delete(void *p)
	{
		count--;
		cout<<"��H�R��"<<endl;
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
	cout<<"�`�@�Ы�"<<Man::count<<"��class"<<endl;
	return 0;
}
