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
*/ //�H�W�Oc++�{�� �H�U�Oc�y���{��
struct car
{
	int price;
}; 
void set_price(struct car* thiss,int p) //�bc�y���̥i�g��this �]��this�bc++���t�~�\��ҥH��sthiss 
{
	thiss->price=p;
}
int main()
{
	struct car c1;
	set_price(&c1,20);
	printf("%d",c1.price);
}
