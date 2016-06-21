#include <iostream>
#include <thread>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;
void current_state()//°ò¥»¥¨¶°
{
	cout << __FILE__ << endl;
	cout << __DATE__ << endl;
	cout << __LINE__ << endl;
	cout << __TIME__ << endl;
	cout << __FUNCTION__ << endl<<endl;
}
//#define debug
int main()
{
	current_state();

	static_assert(sizeof(void *) == 4, "64bit is not supported.");

#ifdef debug
	cout<<"debug mode"<<endl;
#endif
	system("pause");
	return 0;
}
