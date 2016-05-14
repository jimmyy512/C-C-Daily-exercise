//#define NDEBUG
#include <iostream> 
#include <assert.h>
using namespace std;
int main()
{
	int count=0,i,check=5;
	for(count=0;count<10;count++)
	{
		cout<<"for loop count="<<count<<" check"<<check<<endl;
		assert(count<check);
	}
	
	
	
	
}
