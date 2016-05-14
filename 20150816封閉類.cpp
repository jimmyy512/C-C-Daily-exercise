#include <iostream>
using namespace std;
class CTyre
{
	public:
		CTyre(){cout<<"CTyre contructor"<<endl;}
		~CTyre(){cout<<"CTyre destructot"<<endl;} 
};
class CEngine
{
	public:
		CEngine(){cout<<"CEngine contructor"<<endl;}
		~CEngine(){cout<<"CEngine destructor"<<endl;}
};
class CCar
{
	private:
		CTyre Tyre;
		CEngine Engine;
	public:
		CCar(){cout<<"CCar contructor"<<endl;}
		~CCar(){cout<<"CCar contructor"<<endl;}
};
int main()
{
	CCar car;//若要執行封閉類 必先執行 結構子
}
