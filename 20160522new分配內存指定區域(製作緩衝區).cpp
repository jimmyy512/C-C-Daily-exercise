#include <iostream>
using namespace std;
int arryNum = 5;//數組長度
char buffer[512] = { 0 };
int main()
{
	double *p1 = new double[arryNum];
	double *p2 = new (buffer)double[arryNum];//利用buffer這段地址當作要分配的首地址 這樣若沒有delete 也不會內存洩漏
	cout << "p1陣列首地址:" << p1<<"   " << "p2陣列首地址:" << p2<<endl;

	double *p3 = new double[arryNum];
	double *p4 = new (buffer)double[arryNum];
	cout << "p3陣列首地址:" << p3 << "   " << "p4陣列首地址:" << p4<< endl;

	double *p5 = new double[arryNum];
	double *p6 = new (buffer)double[arryNum];
	cout << "p5陣列首地址:" << p5 << "   " << "p6陣列首地址:" << p6 << endl;
	system("pause");
	return 0;
}
