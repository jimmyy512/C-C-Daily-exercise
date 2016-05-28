#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()//vector其實就是指針陣列
{
	vector<int>myvector,myvector2,myvector3;
	vector<vector<int>>allvector;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	myvector2.push_back(100);
	myvector3.push_back(9999);
	myvector3.push_back(99991);

	allvector.push_back(myvector);
	allvector.push_back(myvector2);
	allvector.push_back(myvector3);
	for (int i = 0; i < allvector.size(); i++)
	{
		for (int j = 0; j < allvector[i].size(); j++)
		{
			printf("%p ",&allvector[i][j]);
			cout << allvector[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
