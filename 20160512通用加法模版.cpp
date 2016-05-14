#include <iostream>
#include <cstdarg>
using namespace std;
template <typename T>
T sum(T count,...)//...累加 
{
	va_list arg_ptr;//參數列表指針 
	va_start (arg_ptr,count);//限定從count 開始多少個參數 
	T summation=0;
	int i=0;
	for(i=0;i<count;i++)
	{
		summation+=va_arg(arg_ptr,T);
	}
	va_end(arg_ptr);//結束 
	return summation;
}
int main()
{

	cout<<sum(3,1,2,3)<<endl;
	cout<<sum(3.0,2.0,2.0,3.0)<<endl;
	
}
