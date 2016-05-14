//有三位學生 各有4科成績 請先顯示平均  和輸入第幾位學生並列出所有成績 
#include <stdio.h> 
#include <stdlib.h>
int i,j;
double  avg(int (*p)[4],int n)    //二維指針 *p一定要加括號 
{
	double res=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			res+=p[i][j];
		}
	}
	res/=n;
	printf("%f\n",res);
	return res;
}
void show(int Num,int (*p)[4])
{
	printf("第%d個學生成績是:\n",Num+1);
	for(i=0;i<4;i++)
		printf("%d ",p[Num][i]);
	printf("\n\n");
}
void scearch(int (*p)[4])
{
	printf("其中一科不及格的同學:\n");
	for(i=0;i<3;i++)
	{
		int check=1; //假定及格為1
		for(j=0;j<4;j++)
		{
			if(p[i][j]<60)
			{
				check=0;
				break;
			}
		}
		if(check==0)
		{
			for(j=0;j<4;j++)//偵測到不及格就全部打印
			{ 
				printf("%d ",p[i][j]);
			} 
			printf("\n");
		}
	}
}
int main()
{
	int Stu[3][4]={{76,80,55,78},{90,51,68,65},{99,100,60,66}};
	int num = 0;
	for (i = 0; i < 12; i++) //1~100存入2維數組的方法2
	{
		printf("%3d ", Stu[i / 4][i % 4]);
		if ((i+1) % 4==0)  //換行
			printf("\n");
	}
	printf("\n");
	int Num;
	printf("成績平均為=%f\n\n",avg(Stu,12));
	printf("請輸入要查詢第幾位學生:");
	scanf_s("%d",&Num);
	Num--;
	show(Num,Stu);
	scearch(Stu);
}
