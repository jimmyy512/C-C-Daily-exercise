#include <iostream>
#include <cstring>
using namespace std;
class people
{
	int fishc;
	public:
		people(int fishc)
		{
			this->fishc=fishc;   //因為同名所以電腦並不知道 哪個是成員變數 哪個是引數  
		}						//this指針能明確告訴他 指向的是成員變數 
		int get_fishc()
		{
			return fishc;
		}
};
int main()
{
	people a(10);
	cout<<a.get_fishc();
}
