#include <iostream>
using namespace std;
int arryNum = 5;//�Ʋժ���
char buffer[512] = { 0 };
int main()
{
	double *p1 = new double[arryNum];
	double *p2 = new (buffer)double[arryNum];//�Q��buffer�o�q�a�}��@�n���t�����a�} �o�˭Y�S��delete �]���|���s���|
	cout << "p1�}�C���a�}:" << p1<<"   " << "p2�}�C���a�}:" << p2<<endl;

	double *p3 = new double[arryNum];
	double *p4 = new (buffer)double[arryNum];
	cout << "p3�}�C���a�}:" << p3 << "   " << "p4�}�C���a�}:" << p4<< endl;

	double *p5 = new double[arryNum];
	double *p6 = new (buffer)double[arryNum];
	cout << "p5�}�C���a�}:" << p5 << "   " << "p6�}�C���a�}:" << p6 << endl;
	system("pause");
	return 0;
}
