#include<iostream>
#include <array>
#include <vector>
using namespace std;
class data
{
public:
	char* pstr;
	int length;
public:
	data(int length,char *str)
	{
		this->pstr = new char[length];
		printf("this->pstr:%p\n", this->pstr);
		strcpy(this->pstr, str);
		this->length = length;
	};
	data(const data&data1)
	{
		//�L����
		//printf("data1.pstr:%p\n",data1.pstr);
		//this->pstr = data1.pstr; //�Y���V�o�ƾڳQ���� ���ĤG�ӹ�H �ҫ��V�o�ƾڴN�|�X��
		//this->length = data1.length;

		//�`����    �t�~�A�����@���ҫ��V�o�ƾ� �A�h���V�L �C�ӹﹳ�̪�pstr���V�o�ƾڳ��O�W�ߪ� �����z�Z
		this->pstr = new char[data1.length];
		this->length = data1.length;
		strcpy(pstr, data1.pstr);
	}
	~data()
	{
		delete pstr;
	}
};
int main()
{

	data *pd1=new data(6, "hello");
	cout<<pd1->pstr<<endl;
	data *pd2=new data(*pd1);
	delete pd1;
	cout << pd2->pstr << endl;
	system("pause");
	return 0;
}
