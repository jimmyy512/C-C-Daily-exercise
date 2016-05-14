#include <iostream>
#include <cstring>
using namespace std;
class Dog
{
	private:
		char* pname;
		char* color;
		static int counter1;
	public:
		Dog(char* n, char* c)
		{
			pname = n;
			color = c;
			counter1++;
		}
		int get_counter(){return counter1;}
};
int Dog::counter1 = 0;
int main()
{
	Dog d1("小黃", "黃色");
	Dog d2("小綠", "綠色");
	cout<<"count 執行次數"<<d1.get_counter()<<endl;
}

