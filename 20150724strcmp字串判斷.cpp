#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int i;
	char input[20];
	const char* fruit[5]={"orange","apple","banana","watermellon","pintapple"};
	int price[5] = { 20, 30, 10, 22, 50 };
	cout << "orange,apple,banana,watermellon,pintapple" << endl << "wich do u want?" << endl;
	cin >> input;
	for (i = 0; i<5; i++)
	{
		if (strcmp(fruit[i], input) == 0)  //0�N��@�ˤj 1�N����j -1�N��k��j 
		{
			cout << input << "�@�笰" << price[i] << "��" << endl;
		}
	}
	system("pause");
}
