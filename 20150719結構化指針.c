#include <stdio.h>
#include <stdlib.h>
struct info
{
	int num;
	double db;
}info1,*p1,*p2;   //結構的變數 
void main()
{
	printf("%d , %f\n",info1.num=10,info1.db=10.8);
	
	p1=&info1;
//	printf("指針p1 %d , %f\n",(*p1).num,(*p1).db);   指針訪問解構的兩種形式 
	printf("指針p1 %d , %f\n",p1->num,p1->db);
	
	p2=(struct info*)malloc(sizeof(struct info));
	p2->num=20;
	p2->db=20.8;
	printf("指針p1 %d , %f\n",p1->num,p1->db);
	
	
}
