#include <iostream>
#include <cstring>
using namespace std;
struct Data
{
	char name[10];
	int height;
};
class date
{
	private:
		int year;
		int month;
		int day;
	public:
		void setdate(int y,int m,int d){year=y,month=m,day=d;};
		int getyear(){return year;};
		int getmonth(){return month;};
		int getday(){return day;};
};
class person
{
	private:
		date birthday;
		Data data;
	public:
		void setalldata(date d1,Data d2)
		{
			birthday.setdate(d1.getyear(),d1.getmonth(),d1.getday());
			strcpy(data.name,d2.name);
			data.height=d2.height;
		}
		void printalldata()
		{
			cout<<"姓名:"<<data.name<<endl;
			cout<<"身高:"<<data.height<<endl;
			cout<<"生日:"<<birthday.getyear()<<","<<birthday.getmonth()<<","
			<<birthday.getday()<<endl;
		}
};
int main()
{
	date d1;
	d1.setdate(1996,8,5);
	Data d2;
	d2.height=180;
	strcpy(d2.name,"Jim");
	person p;
	p.setalldata(d1,d2);
	p.printalldata();
}
