#include <iostream>
using namespace std;
class Polynomial 
{
	int p1,p2,p3;
	public:
//		Polynomial()
//		{
//			p1=0;
//			p2=0;
//			p3=0;
//		}
		Polynomial(int _p1=0,int _p2=0,int _p3=0); //預設建構子 
		void print_data()
		{
			cout<<p1<<"x^2";
			judge(p2); //判斷後面是否有數字 有的話加上加號 沒有的話 跳出 
			if(p2!=0)
				cout<<p2<<"x";
			judge(p3);
			if(p3!=0) 
				cout<<p3;
			cout<<" = 0";
		}
		void judge(int x)
		{
			if(x>0)
				cout<<" + ";
			else
				cout<<" ";
		}
		Polynomial operator+(Polynomial& p);
};
Polynomial::Polynomial(int _p1,int _p2,int _p3)
{
	p1=_p1;
	p2=_p2;
	p3=_p3;
}
Polynomial Polynomial::operator+(Polynomial& p)
{
	Polynomial ex3;
	ex3.p1=p1+p.p1;
	ex3.p2=p2+p.p2;
	ex3.p3=p3+p.p3;
	return ex3;
}
int main()
{
	Polynomial ex1(10,20,40),ex2(5,8,-45),ex3;
	ex1.print_data(),cout<<endl<<"加上"<<endl,ex2.print_data(),cout<<endl<<"結果等於:";
	ex3=ex1+ex2,ex3.print_data();
	
}
