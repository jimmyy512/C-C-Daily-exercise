#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
	int n;
	for(n=1;n<=10;n++)
		cout<<n<<"!"<<"="<<factorial(n)<<endl; 
}
int factorial(int n)
{
	int total;
	if(n==0)
		total=1;
	else
		total=n*factorial(n-1);
	return total;
}
