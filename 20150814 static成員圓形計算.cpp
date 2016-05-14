#include <iostream>
using namespace std;
class Rectangle
{
	private:
		int w,h;//w=width �e�� h=height ����
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
			cout<<"�`���n�[�_�Ӭ�:"<<rectangle_area<<"�`�@��:"<<rectangle_num<<"����ƿ�J!"<<endl;
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
	r1.print_total();   //static �O�����ܶq ���O�]���qr1�I�s�N�Ostatic�N�O���ݩ���
	//					static�O���ݩ��������
	Rectangle::print_total(); //�ҥH�]��o�˥��L�X���G 
	Rectangle r3(r2);
	cout<<"�W�[r3�o�s�����!"<<endl;
	Rectangle::print_total();
	cout<<"�R��r2�o���!"<<endl;
	r2.~Rectangle(); //�Ѻc�l �h��r2�������  �]�i�H�h��r1
	Rectangle::print_total();

	
}
