#include <iostream>
using namespace std;
class location
{
	private:
		int x,y;
	public:
		void init(int x=0,int y=0); //�ʬٰѼ� �Y�Ƕi�ȨS��l�� �N�|��l�Ʀ��o�̩ҳW�w�o�� 
		int Value(){return x;};			//������� �W�l���ۦP���O�\�ण�P 
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
	A.init(5); //�ʬ٨�� �u����l��x �Y�S����l�ƪ��ȴN�|�ܬ�0 �ҥHy��0 
	A.print();
	A.Value(5); 	
	cout<<A.Value();
}
