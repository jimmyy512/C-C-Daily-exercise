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
	cout << "�q�μҪ��Q�ե�" << endl;
}

template < >
void Myswap(myclass &t1, myclass &t2)//�q�μҪ��M�Ƽg�ҪO �sĶ���|�u������������T�����
{
	myclass tmp = t1;
	t1 = t2;
	t2 = tmp;
	cout << "�Ƽg�Ҫ��Q�ե�" << endl;
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
