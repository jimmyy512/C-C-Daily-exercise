#include <iostream>
using namespace std;
int main()
{

	int num1 = 5;
	int num2 = 10;
	int *p=&num1;
	int* &rpm=p; //�ޥΫ��w 
	
	rpm=&num2;//�ޥΧ��ܫ��w�����V
	*p=15;
	
	cout<<num1<<endl;
	cout<<num2;
	system("pause");
	return 0;
}
