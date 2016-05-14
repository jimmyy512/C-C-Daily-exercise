#include <iostream>
using namespace std;
int main()
{
	enum
	{
		Mon=100,
		Tue=100,
		Wed=100,
		Thu=100,
		Fri=100,
		Sat=120,
		Sun=150	
	};
	cout<<"請輸入星期一~到星期日的工作時數"<<endl; 
	int Week_day,total=0,hours,pay;
	for(Week_day=0;Week_day<7;Week_day++)
	{
		cin>>hours;
		switch(Week_day)
		{
			case 0:
				pay=Mon*hours;
				break;
			case 1:
				pay=Tue*hours;
				break;
			case 2:
				pay=Wed*hours;
				break;
			case 3:
				pay=Thu*hours;
				break;
			case 4:
				pay=Fri*hours;
				break;
			case 5:
				pay=Sat*hours;
				break;
			case 6:
				pay=Sun*hours;
				break;
		}
		total+=pay;
	}
	cout<<"您本周的薪水為:"<<total; 
}
