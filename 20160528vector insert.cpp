#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{
	vector<int>myvector(5);//���}�P5�ӼƭȬ��o�ƾ�
	for (int i = 0; i < myvector.size(); i++)
	{
		printf("%p ", &myvector[i]);
		cout << myvector[i]<<" "<<endl;
	}
	myvector.insert(myvector.begin(), 123);//�u�n���J�ƾڡA�o��vector�N�|���s���t�C�Ӥ����O����
										//�O�����w�Ʋժ��s�e��
	cout << endl;
	for (int i = 0; i < myvector.size(); i++)
	{
		printf("%p ", &myvector[i]);
		cout << myvector[i] << " " << endl;
	}
	system("pause");
	return 0;
}
