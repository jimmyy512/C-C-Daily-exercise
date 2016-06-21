#include <iostream>
#include <array>
#include <vector>
using namespace std;
class data
{
public:
	const int num;//const變數在類的內部與外部不同 在類的內部的const是存在於內存的和c語言的模式相同 所以可以利用
				//modify函數讀寫內存的方式去更改內容
	static const int constNum;
public:
	data(int num) :num(num)
	{
	
	}
	void modify(int wantToMod)
	{
		const int *p = &num;
		int *pconst = const_cast<int *>(p);
		*pconst = wantToMod;
	}
	void printData()
	{
		cout << "const num:" << num<<endl;
		cout << "static const num:" << constNum << endl;
	}
};
const int data::constNum = 20;
int main()
{
	{//在普通情況下(相較於類的外部 const 是在編譯時期執行的 會直接替換成符號表 所以不管怎樣改他的內存都無法更改內容
		//c語言 得const是讀內存 所以可以利用指針修改 const變數 c++不行
		const int num2 = 10;
		const int *p = &num2;
		int *pconst = const_cast<int *>(p);//const cast 去掉const屬性
		*pconst = 20;
		int arry[num2];
		printf("num2=%d *pconst=%d\n", num2, *p);
	}
	//cout << data::num << endl; error! 內部的const變量 在未生成對象的情況下 無法操作
	cout <<"在未生成對象下打印static int"<<data::constNum << endl;//static=外部 所以在尚未生成的對象下 就能操作
	data d1(10);
	d1.printData();
	d1.modify(999);
	d1.printData();
	
	system("pause");	
	return 0;
}

