#include <iostream>
using namespace std;
int main()
{
	const int num = 100;
	int *p = const_cast<int *>(&num);
	*p = 10;
	cout << *p << endl;
	cout << num << endl;
	system("pause");
	return 0;
}
