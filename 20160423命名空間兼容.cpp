#include <iostream>
namespace ns
{
	int(*pf)(int, int)=NULL;
}
int add(int a, int b)
{
	return a + b;
}
int addModify(int a, int b)
{
	std::cout << "addModify" << std::endl;
	return a + b;
}
int main()
{
	//int(*padd)(int, int) = add; �@���ƫ��w����k 
	
	ns::pf = add;//�H�ɥi�H�����t�@�Ө�� �ݮi�{�����i�X�R�� 
	//ns::pf = addModify;
	int sum = ns::pf(3, 4);
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}
