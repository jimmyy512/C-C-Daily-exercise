#include <iostream>
using namespace std;
int main()
{
	int obj=12,j;
	int &r=obj;
	r=15;
	cout<<obj<<endl;
//	&p=j;     竒把σobj跑计 ぃ把σㄤ跑计
	int array[3]={1,2,3};
	int *pointer=array;
	int * &rarray=pointer; //璶ㄏノ夹把σ 结ぉゲ斗皐 
	int i;
	for(i=0;i<3;i++)
	{
		cout<<*(rarray+i)<<endl;
	}
	
	
	
	
}
