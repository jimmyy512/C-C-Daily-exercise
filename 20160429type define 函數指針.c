#include <stdio.h>
#define dp(x) void (*x)(int num)//define 替換文字 
typedef void(*tp)(int num);//給型態定個別名 
void printNum(int num)
{
	printf("%d\n", num);
}
void main()
{
	dp(pd) = printNum;
	pd(3);
	tp p = printNum;
	p(20);
	//printf("hello world!);
	system("pause");

}
