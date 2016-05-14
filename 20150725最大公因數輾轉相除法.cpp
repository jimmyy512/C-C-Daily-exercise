#include <iostream>
using namespace std;
int Common_Divisor();
int main()
{
	int min;
	min=Common_Divisor();
	cout<<"最大公因數為"<<min;
}
int Common_Divisor()
{
	int n1,n2,temp;
	cin>>n1>>n2;
	while(n2!=0)
	{
		temp=n1%n2;
		n1=n2;
		n2=temp;
	}
	return n1;
	
	
	
}
