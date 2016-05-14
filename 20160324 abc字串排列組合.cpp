#include <iostream>
#include <windows.h>
using namespace std;
char str[3] = { 'a', 'b', 'c' };
bool used[3];
char solution[3];//可能得組合 
void print()
{
	int i = 0;
	for (i = 0; i<3; i++)
		cout << solution[i];
	cout << endl;
}
void start(int n)
{
	if (n == 3)
	{
		print();
		return;
	}
	int i = 0;
	for (i = 0; i<3; i++)
	{
		if (!used[i])
		{
			used[i] = true;
			solution[n] = str[i];
			start(n + 1);
			used[i] = false;
		}
	}
}

int main()
{

	start(0);
	return 0;
}
