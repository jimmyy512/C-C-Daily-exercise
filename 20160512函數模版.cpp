#include <iostream>
using namespace std;
template <typename T> T MAX(T*p,const int n)
{
	T maxdata=p[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(p[i]>maxdata)
		{
			maxdata=p[i];
		}
	}
	return maxdata;
}
int main()
{
	double db[10]={1.1,2.2,3,4,5,6,7,9.5,8,8.9};
	int num[10]={1,2,3,4,5,6,8,7,9,6};
	cout<<MAX(db,10)<<endl;
	cout<<MAX(num,10)<<endl;
	
}
