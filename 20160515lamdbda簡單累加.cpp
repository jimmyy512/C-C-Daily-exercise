#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int>v;
	for (int i = 0; i < 10;i++)
		v.push_back(i);
	int sum = 0;
	for_each(v.begin(), v.end(), [&sum](int x)
	{
		sum += x;
	});
	cout << "0~10²Ö¥[:"<<sum<< endl;

	system("pause");
	return 0;
}
