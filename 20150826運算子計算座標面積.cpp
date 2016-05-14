#include <iostream>
#include <Cmath>
using namespace std;
class Coordinate
{
	int x1,x2,y1,y2;
	public:
		Coordinate(){x1=x2=y1=y2=0;}
		Coordinate(int _x1,int _x2,int _y1,int _y2)
		{
			x1=_x1;
			x2=_x2;
			y1=_y1;
			y2=_y2;
		}
		void print_data()
		{
			cout<<"<"<<x1<<","<<x2<<","<<y1<<","<<y2<<">";
		}
		int operator>(Coordinate& c)
		{
			int area1,area2;
			area1=fabs((x1-x2)*(y1-y2));
			area2=fabs((c.x1-c.x2)*(c.y1-c.y2));
			if(area1>area2)
				return 1;
			else
				return 0;
		}
};
int main()
{
	Coordinate area1(10,-2,14,20),area2(5,18,3,-9);
	cout<<"Area1得座標<x1,x2,y1,y2>如下"<<endl;
	area1.print_data();
	cout<<endl;
	cout<<"Area2得座標<x1,x2,y1,y2>如下"<<endl;
	area2.print_data();
	cout<<endl;
	cout<<endl<<"比較結果:"<<endl;
	if(area1>area2)
		cout<<"area1面積較大";
	else
		cout<<"area2面積較大";
}
