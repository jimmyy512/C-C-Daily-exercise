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
void change(int (*&pr)(int,int))//�ޥΨ�ƫ��w���  //�Ĥ@�� 
{
	pr=sub;
}
int(*&changep(int(*&rp)(int,int)))(int,int)//int(*&��ƦW)(int,int) �ޥΨ�Ʊo�ޥ�  //�ĤG�حY��ȥ��ѥi�H��^���G 
{
	rp=sub;
	return rp;
}
int main()
{
	int (*p)(int,int)=add;//��ƫ��w 
	printf("%d\n",p(2,3));
//	p=sub;
//	printf("%d",p(2,3));
	//int (*&pr)(int,int)=p;//�ޥΨ�ƫ��w 
	changep(p);
	printf("%d\n",p(6,2));
	
	
	return 0;
}
