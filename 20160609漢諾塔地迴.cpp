#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;
void han(int n, char A, char B, char C)
{
	if (n < 1)
		return;
	else
	{
		han(n - 1, A, C, B);
		cout << A << "->" << C<<endl;
		han(n - 1, B, A, C);
	}
}
int main()
{
	int n;
	cin >> n;
	han(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}
