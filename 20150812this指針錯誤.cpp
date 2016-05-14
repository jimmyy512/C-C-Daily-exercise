#include <iostream> 
using namespace std;
class test
{
		int i;
	public:
		void hello(){cout<<"1"<<endl;}
//		void hello(){cout<<i<<endl;} //錯誤
//		void hello(test* this){cout<<this->i<<endl;}
};
int main()
{
	test* t=NULL;//指針對象指向null 並沒有指向任何地方  
	t->hello(); //hello(test)
}
