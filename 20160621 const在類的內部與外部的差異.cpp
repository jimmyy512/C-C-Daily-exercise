#include <iostream>
#include <array>
#include <vector>
using namespace std;
class data
{
public:
	const int num;//const�ܼƦb���������P�~�����P �b����������const�O�s�b�󤺦s���Mc�y�����Ҧ��ۦP �ҥH�i�H�Q��
				//modify���Ū�g���s���覡�h��鷺�e
	static const int constNum;
public:
	data(int num) :num(num)
	{
	
	}
	void modify(int wantToMod)
	{
		const int *p = &num;
		int *pconst = const_cast<int *>(p);
		*pconst = wantToMod;
	}
	void printData()
	{
		cout << "const num:" << num<<endl;
		cout << "static const num:" << constNum << endl;
	}
};
const int data::constNum = 20;
int main()
{
	{//�b���q���p�U(�۸��������~�� const �O�b�sĶ�ɴ����檺 �|�����������Ÿ��� �ҥH���ޫ�˧�L�����s���L�k��鷺�e
		//c�y�� �oconst�OŪ���s �ҥH�i�H�Q�Ϋ��w�ק� const�ܼ� c++����
		const int num2 = 10;
		const int *p = &num2;
		int *pconst = const_cast<int *>(p);//const cast �h��const�ݩ�
		*pconst = 20;
		int arry[num2];
		printf("num2=%d *pconst=%d\n", num2, *p);
	}
	//cout << data::num << endl; error! ������const�ܶq �b���ͦ���H�����p�U �L�k�ާ@
	cout <<"�b���ͦ���H�U���Lstatic int"<<data::constNum << endl;//static=�~�� �ҥH�b�|���ͦ�����H�U �N��ާ@
	data d1(10);
	d1.printData();
	d1.modify(999);
	d1.printData();
	
	system("pause");	
	return 0;
}

