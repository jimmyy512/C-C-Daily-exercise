#include <iostream>
using namespace std;
int main()
{
	int n1,n2,max,i;
	cin>>n1>>n2;
	max=n1>n2?n1:n2;
	for(i=max;i>0;i--)
	{
		if(n1%i==0 && n2%i==0)
		{
			cout<<"�̤j���]�Ƭ�:"<<i<<endl; 
			break;
		}
	}
	
	
	
	
}
