#include <iostream>
using namespace std;
class myclass
{
private:
	char* str;
public:
	myclass(char* i_str)
	{
		str = i_str;
	}
	char* get_str()
	{
		return str;
	}
};
template <typename type>
void Myswap(type &t1, type &t2)
{
	type tmp = t1;
	t1 = t2;
	t2 = tmp;
	cout << "通用模版被調用" << endl;
}

template < >
void Myswap(myclass &t1, myclass &t2)//通用模版和複寫模板 編譯器會優先選擇類型明確的函數
{
	myclass tmp = t1;
	t1 = t2;
	t2 = tmp;
	cout << "複寫模版被調用" << endl;
}
int main()
{
	myclass n1("jim");
	myclass n2("hank");
	cout << n1.get_str()<<" "<<n2.get_str() << endl;
	Myswap(n1, n2);
	cout << n1.get_str() << " " << n2.get_str() << endl;


	system("pause");
	return 0;
}
