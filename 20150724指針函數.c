#include <stdio.h>
#include <stdlib.h>
int add(int a,int b)
{
	return a+b;
}
int multiply(int a,int b)
{
	return a*b;
}
int main()
{
//	int add(int a,int b);   рㄧ计嘿 ノ皐 碞穦跑Θ皐ㄧ计 
	int (*p)(int,int);  //把计菠 摸ぃ菠 
	p=add;   //皐addㄧ计 
	printf("%d\n",p(3,4));
	p=multiply;//皐multiplyㄧ计 
	printf("%d\n",p(3,4));
	
	
}
