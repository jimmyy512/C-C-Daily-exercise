#include <iostream>
using namespace std;
int main()
{

	int num1 = 5;
	int num2 = 10;
	int *p=&num1;
	int* &rpm=p; //引用指針 
	
	rpm=&num2;//引用改變指針的指向
	*p=15;
	
	cout<<num1<<endl;
	cout<<num2;
	system("pause");
	return 0;
}
