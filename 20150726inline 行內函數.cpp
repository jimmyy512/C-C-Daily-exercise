#include <iostream>
using namespace std;
inline int line(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	cout<<line(10,16); //inline��Ƶ�����cout<< a>b?a:b ;
//	���Minline�i�`�ٵ{������ɶ� ���O�|�ӶO��h�O���� 
}
