#include <stdio.h>
#define dp(x) void (*x)(int num)//define ������r 
typedef void(*tp)(int num);//�����A�w�ӧO�W 
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
