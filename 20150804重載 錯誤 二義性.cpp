#include <iostream>
using namespace std;
class location
{
	private:
		int x,y;
	public:
		void init(int x=0,int y=0); //把计 璝肚秈⊿﹍て 碞穦﹍てΘ硂柑┮砏﹚眔 
		int Value(){return x;};			//更ㄧ计 瘤琌ぃ 
		void Value(int value=0){x=value;}; //岿粇  
};
int main()
{
	location A; 	
	cout<<A.Value();
}
