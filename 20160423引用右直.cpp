#include <iostream>
using namespace std;
int main()//visual studio�U�~��sĶ 
{

	int num1 = 5;
	int num2 = 10;
	int* &&rpm = &num1;
	cout << *rpm << endl;

	system("pause");
	return 0;
}
