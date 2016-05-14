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
	//int(*padd)(int, int) = add; 一般函數指針的方法 
	
	ns::pf = add;//隨時可以換成另一個函數 拓展程式的可擴充性 
	//ns::pf = addModify;
	int sum = ns::pf(3, 4);
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}
