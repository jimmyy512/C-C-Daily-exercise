#include <iostream>
using namespace std;
class location
{
	private:
		int x,y;
	public:
		void init(int x=0,int y=0); //把计 璝肚秈⊿﹍て 碞穦﹍てΘ硂柑┮砏﹚眔 
		int Value(){return x;};			//更ㄧ计 瘤琌ぃ 
		void Value(int value){x=value;}; 
		int print(){cout<<"x="<<x<<" y="<<y<<endl;};
};
void  location::init(int X,int Y)
{
	x=X;
	y=Y;
}
int main()
{
	location A;
	int test;
	A.init(5); //ㄧ计 Τ﹍てx 璝⊿Τ﹍て碞穦跑0 ┮y0 
	A.print();
	A.Value(5); 	
	cout<<A.Value();
}
