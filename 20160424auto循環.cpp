#include <iostream>
using namespace std;
int main()//�u��Avisual studio�U���� 
{
	int num[5] = { 1, 2, 3, 4, 5 };
	double num2[2][5] = { { 10, 9, 8, 7, 6 }, {5,4,3,2,1} };
	for (auto loop : num)//�@���Ʋ�
	{
		cout << loop << endl;
	}
	cout<< endl;
	for (auto row : num2)//��
	{
		cout << row << endl;
		for (int i = 0; i < 5; i++)//�C
		{
			cout << *(row + i) << endl;
		}
	}
	system("pause");
	return 0;
}
