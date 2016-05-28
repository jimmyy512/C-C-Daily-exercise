#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{
	vector < int > arry;
	for (int i = 0; i < 10; i++)
		arry.push_back(i);
	vector < int > ::iterator ibegin;
	for (ibegin = arry.begin(); ibegin != arry.end(); ibegin++)
	{
		cout << *ibegin << endl;
	}
	system("pause");
	return 0;
}
