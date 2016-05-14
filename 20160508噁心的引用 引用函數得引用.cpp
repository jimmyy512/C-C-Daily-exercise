#include <iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
void change(int (*&pr)(int,int))//まノㄧ计皐ㄧ计  //材贺 
{
	pr=sub;
}
int(*&changep(int(*&rp)(int,int)))(int,int)//int(*&ㄧ计)(int,int) まノㄧ计眔まノ  //材贺璝结ア毖挡狦 
{
	rp=sub;
	return rp;
}
int main()
{
	int (*p)(int,int)=add;//ㄧ计皐 
	printf("%d\n",p(2,3));
//	p=sub;
//	printf("%d",p(2,3));
	//int (*&pr)(int,int)=p;//まノㄧ计皐 
	changep(p);
	printf("%d\n",p(6,2));
	
	
	return 0;
}
