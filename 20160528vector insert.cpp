#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{
	vector<int>myvector(5);//先開闢5個數值為得數據
	for (int i = 0; i < myvector.size(); i++)
	{
		printf("%p ", &myvector[i]);
		cout << myvector[i]<<" "<<endl;
	}
	myvector.insert(myvector.begin(), 123);//只要插入數據，這個vector就會重新分配每個元素記憶體
										//保持指針數組的連貫性
	cout << endl;
	for (int i = 0; i < myvector.size(); i++)
	{
		printf("%p ", &myvector[i]);
		cout << myvector[i] << " " << endl;
	}
	system("pause");
	return 0;
}
