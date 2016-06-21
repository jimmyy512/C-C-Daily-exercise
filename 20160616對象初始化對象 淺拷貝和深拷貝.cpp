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
		//淺拷貝
		//printf("data1.pstr:%p\n",data1.pstr);
		//this->pstr = data1.pstr; //若指向得數據被釋放掉 那第二個對象 所指向得數據就會出錯
		//this->length = data1.length;

		//深拷貝    另外再拷貝一份所指向得數據 再去指向他 每個對像裡的pstr指向得數據都是獨立的 互不干擾
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
