#include <iostream>
using namespace std;
class location
{
	private:
		int x,y;
	public:
		void init(int x=0,int y=0); //�ʬٰѼ� �Y�Ƕi�ȨS��l�� �N�|��l�Ʀ��o�̩ҳW�w�o�� 
		int Value(){return x;};			//������� �W�l���ۦP���O�\�ण�P 
		void Value(int value=0){x=value;}; //���~  
};
int main()
{
	location A; 	
	cout<<A.Value();
}
