#include <iostream> 
using namespace std;
class complex
{
	private:
		double height,weight;
	public:
		complex(double h,double w);   //�Y�S���ۤv�سy�غc�l �t�η|���A���t�w�]�غc�l 
		complex(){};
};
complex::complex(double h,double w)
{
	height=h;
	weight=w;
}
class complex2
{
	private:
		double height,weight;
	public:
		complex2(){};
};
int main()
{
//	complex a;  ���~ �S���ϥΦۤv����l�� 
//	complex *pa=new complex;  ���~�S���ϥΦۤv�سy���غc�l 
	complex b(3,4);
	complex *pb=new complex(3,4);
	complex2 a;//���T complex ���غc�l�èS���n�D�ǤJ�� �ҥH��ŧi 
	complex2 *pa=new complex2;
}

