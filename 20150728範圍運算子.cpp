#include <iostream>
using namespace std;
void view_modify();
int count=100;
int main()
{
	cout<<"�b�z���e�w���[���������H�Ƭ�:"<<count<<endl; 
	view_modify();
	cout<<"�ثe�`���[�H��:"<<count; 
}
void view_modify()
{
	int count=0;//�ϰ��ܼƸ̪�count 
	count++;
	cout<<"�z�O�����"<<count<<"��ȤH"<<endl; 
	
	::count++;//�d��B��l:: ��ק�����ܼƪ��� 
}
