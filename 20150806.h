#include <iostream>
using namespace std;
class Man
{
	private:
		char *name;
		int age;
	public:
		Man(char *n,int a);
		void set_name(char *n);
		void set_age(int a);
		char* get_name() const;
		int get_age() const;
		inline void printdata(){cout<<name<<","<<age<<endl;};
};
