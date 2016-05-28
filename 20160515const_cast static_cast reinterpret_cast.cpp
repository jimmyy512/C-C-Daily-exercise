#include <iostream>
using namespace std;
int main()
{
	int num = 100;
	const int*p = &num;
	int *constcast = const_cast<int*>(p);//const_cast用於一些特殊場合可以覆寫變數的const屬性
	//										利用cast後的指標就可以更改變數的內部。
	*constcast = 10;
	printf("num:%d\n", num);
	printf("static_cast:%d\n", static_cast<int>(3.12345));

	int nums[4]= { 1, 2, 3, 4 };
	char*ppnum = reinterpret_cast<char *>(nums);//用於將一種型態的指標轉換為另一種型態的指標，例如將int轉換為char*
	int i=0;
	for (i = 0; i < 16; i++)
	{
		printf("%d ", *(ppnum+i));
		if ((i+1)%4==0)
			printf("\n");
	}
	system("pause");
	return 0;
}

