#include <stdio.h>
#include <iostream>
/*
using namespace std;
class car
{
	public:
		int price;
		void set_price(int p);
};
void car::set_price(int p)
{
	price=p;
}
int main()
{
	car c1;
	c1.set_price(20);
}
*/ //以上是c++程序 以下是c語言程序
struct car
{
	int price;
}; 
void set_price(struct car* thiss,int p) //在c語言裡可寫成this 因為this在c++有另外功能所以改叫thiss 
{
	thiss->price=p;
}
int main()
{
	struct car c1;
	set_price(&c1,20);
	printf("%d",c1.price);
}
