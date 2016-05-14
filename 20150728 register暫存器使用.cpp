#include <iostream>
using namespace std;
double Get_Length(int m);
int main()
{
	register int m=10;
	int i;
	cout<<"¤½¤Ø\t­^¤Ø"<<endl;
	for(;m<=20;m++)
		cout<<m<<"\t"<<Get_Length(m)<<endl;
}
double Get_Length(int m)
{
	double ft;
	ft=m*3.28;
	return ft;
}
