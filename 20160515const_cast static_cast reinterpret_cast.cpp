#include <iostream>
using namespace std;
int main()
{
	int num = 100;
	const int*p = &num;
	int *constcast = const_cast<int*>(p);//const_cast�Ω�@�ǯS����X�i�H�мg�ܼƪ�const�ݩ�
	//										�Q��cast�᪺���дN�i�H����ܼƪ������C
	*constcast = 10;
	printf("num:%d\n", num);
	printf("static_cast:%d\n", static_cast<int>(3.12345));

	int nums[4]= { 1, 2, 3, 4 };
	char*ppnum = reinterpret_cast<char *>(nums);//�Ω�N�@�ث��A�������ഫ���t�@�ث��A�����СA�Ҧp�Nint�ഫ��char*
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

