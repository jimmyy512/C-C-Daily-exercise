#include <iostream>
#include <cstring>
using namespace std;
class people
{
	int fishc;
	public:
		people(int fishc)
		{
			this->fishc=fishc;   //�]���P�W�ҥH�q���ä����D ���ӬO�����ܼ� ���ӬO�޼�  
		}						//this���w����T�i�D�L ���V���O�����ܼ� 
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
