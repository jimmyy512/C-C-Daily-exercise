#include <iostream>
using namespace std;
class Rectangle
{
	private:
		int w,h;//w=width 寬度 h=height 高度
		static int rectangle_area;
		static int rectangle_num;
	public:
		Rectangle(int _w,int _h)
		{
			w=_w;
			h=_h;
			rectangle_area+=w*h;
			rectangle_num++;
		}
		~Rectangle()
		{
			rectangle_num--;
			rectangle_area-=w*h;
		}
		void static print_total()
		{ 
			cout<<"總面積加起來為:"<<rectangle_area<<"總共有:"<<rectangle_num<<"筆資料輸入!"<<endl;
		}
		Rectangle(Rectangle& r)
		{
			w=r.w;
			h=r.h;
			rectangle_area+=w*h;
			rectangle_num++;
		}
};
int Rectangle::rectangle_area=0;
int Rectangle::rectangle_num=0;
int main()
{
	Rectangle r1(2,3),r2(4,5);
	r1.print_total();   //static 是全局變量 不是因為從r1呼叫就是static就是隸屬於此類
	//					static是不屬於任何類的
	Rectangle::print_total(); //所以也能這樣打印出結果 
	Rectangle r3(r2);
	cout<<"增加r3得新物件後!"<<endl;
	Rectangle::print_total();
	cout<<"刪除r2得資料!"<<endl;
	r2.~Rectangle(); //解構子 去除r2那筆資料  也可以去除r1
	Rectangle::print_total();

	
}
