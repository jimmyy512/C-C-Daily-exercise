//���T��ǥ� �U��4�즨�Z �Х���ܥ���  �M��J�ĴX��ǥͨæC�X�Ҧ����Z 
#include <stdio.h> 
#include <stdlib.h>
int i,j;
double  avg(int (*p)[4],int n)    //�G�����w *p�@�w�n�[�A�� 
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
	printf("��%d�Ӿǥͦ��Z�O:\n",Num+1);
	for(i=0;i<4;i++)
		printf("%d ",p[Num][i]);
	printf("\n\n");
}
void scearch(int (*p)[4])
{
	printf("�䤤�@�줣�ή檺�P��:\n");
	for(i=0;i<3;i++)
	{
		int check=1; //���w�ή欰1
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
			for(j=0;j<4;j++)//�����줣�ή�N�������L
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
	for (i = 0; i < 12; i++) //1~100�s�J2���Ʋժ���k2
	{
		printf("%3d ", Stu[i / 4][i % 4]);
		if ((i+1) % 4==0)  //����
			printf("\n");
	}
	printf("\n");
	int Num;
	printf("���Z������=%f\n\n",avg(Stu,12));
	printf("�п�J�n�d�߲ĴX��ǥ�:");
	scanf_s("%d",&Num);
	Num--;
	show(Num,Stu);
	scearch(Stu);
}
