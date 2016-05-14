#include <iostream> 
using namespace std;
class test
{
	private:
		int num, member;
	public:
		test(int n){ num = n; };        //1
		test(int n, int m){};  //2
		test(){};             //3
		int getn(){ return num; };
	};
int main()
{
	test array[3] = { 1, test(2, 3) };
	//三個元素分別用 1 2 3初始化
	cout << array[0].getn()<<endl;
	test array2[3] = { test(2, 3), test(1, 2), 1 };
	//三個元素分別用 2 2 1初始化
	test *parray[3] = { new test(4), new test(2, 3) };
	//只有1 2初始化到 由於第三個沒有用new初始化 指針取的是地址 所以根本沒有指向任何位子  
	cout << parray[0]->getn();
	system("pause");
}
