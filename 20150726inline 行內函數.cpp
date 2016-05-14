#include <iostream>
using namespace std;
inline int line(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	cout<<line(10,16); //inline函數等價於cout<< a>b?a:b ;
//	雖然inline可節省程式執行時間 但是會耗費更多記憶體 
}
