#include <iostream>
using namespace std;
int * &getdata()
{
	int *p=new int;
	*p=10;
	return p;
	
}
int main()
{
	int* & ra=getdata();
	int *p=ra;
	cout<<*ra<<endl;
	cout<<*p<<endl;
	cout<<*ra<<endl;
	cout<<*p<<endl;
	
	delete p;
	cout<<*p<<endl;
	
	system("pause");
	return 0;
}
