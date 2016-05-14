#include <iostream>
using namespace std;
class Share
{
	friend void friend_func(Share&);
	private:
		int a;
		void print_A(){cout<<"private"<<endl;}
	protected:
		int b;
		void print_B(){cout<<"protected"<<endl;}
	public:
		int c;
		void print_C(){cout<<"public"<<endl;}
};
void friend_func(Share& s);
{
	s.a;
}
int main()
{
	Share S;
	S.print_C();
	friend_func(S);
}
