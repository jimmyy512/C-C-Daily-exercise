#include <iostream> 
using namespace std;
class test
{
		int i;
	public:
		void hello(){cout<<"1"<<endl;}
//		void hello(){cout<<i<<endl;} //���~
//		void hello(test* this){cout<<this->i<<endl;}
};
int main()
{
	test* t=NULL;//���w��H���Vnull �èS�����V����a��  
	t->hello(); //hello(test)
}
