#include <iostream>
#include <array>
using namespace std;
int main()//visual studio 2013 can run
{
	std::array<string, 4>str = {"mspaint","calc","notepad","tasklist"};
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		system(str[i].c_str());
	}
	system("pause");
	return 0;
}
