#include <iostream> 
using namespace std;
class test
{
	private:
		int num, member;
	public:
		test(int n){ num = n; };        //1
		test(int n, int m){};  //2
		test(){};             //3
		int getn(){ return num; };
	};
int main()
{
	test array[3] = { 1, test(2, 3) };
	//�T�Ӥ������O�� 1 2 3��l��
	cout << array[0].getn()<<endl;
	test array2[3] = { test(2, 3), test(1, 2), 1 };
	//�T�Ӥ������O�� 2 2 1��l��
	test *parray[3] = { new test(4), new test(2, 3) };
	//�u��1 2��l�ƨ� �ѩ�ĤT�ӨS����new��l�� ���w�����O�a�} �ҥH�ڥ��S�����V�����l  
	cout << parray[0]->getn();
	system("pause");
}
