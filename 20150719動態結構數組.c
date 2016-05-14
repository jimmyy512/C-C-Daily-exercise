#include <stdio.h>
#include <stdlib.h>
struct info
{
	int num;
	double db;
}*p1,*p2;
int main()
{
	p2=(struct info*)malloc(sizeof(struct info)*5);
	int i=0;
	for(p1=p2;p1<p2+5;p1++)
	{
		p1->num=i;
		p1->db=i+3.5;
		i++;
		printf("%d %f\n",p1->num,p1->db);
	
	}
	
	printf("\n");
	int j;
	for(j=0;j<5;j++)//數組方式再次賦值 
	{
		p1->num=i+3;
		p1->db=i+4.5;
		i++;
		printf("%d %f\n",p1->num,p1->db);
	}
	free(p2);	
	
}
