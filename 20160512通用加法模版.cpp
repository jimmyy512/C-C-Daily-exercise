#include <iostream>
#include <cstdarg>
using namespace std;
template <typename T>
T sum(T count,...)//...仓 
{
	va_list arg_ptr;//把计皐 
	va_start (arg_ptr,count);//﹚眖count 秨﹍ぶ把计 
	T summation=0;
	int i=0;
	for(i=0;i<count;i++)
	{
		summation+=va_arg(arg_ptr,T);
	}
	va_end(arg_ptr);//挡 
	return summation;
}
int main()
{

	cout<<sum(3,1,2,3)<<endl;
	cout<<sum(3.0,2.0,2.0,3.0)<<endl;
	
}
