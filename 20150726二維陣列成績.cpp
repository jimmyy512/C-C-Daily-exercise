#include <iostream>
using namespace std;
int print(char Student_Name[][10],int Score[][3]);
int average(int Score[][3]);
int main()
{
	cout<<"�m�W\t���\t�^��\t�ƾ�\t�`��\t����"<<endl;
	char Student_Name[4][10]={{"���p��"},{"���j�P"},{"�i���"},{"�L����"}}; 
	int Score[4][3]={{90,100,77},
					 {59, 70,81},
					 {40, 55,73},
					 {60, 70,66}};
	print(Student_Name,Score);
}
int total(int Score[][3],int i)
{
	int j,sum=0;
	for(j=0;j<3;j++)
		sum+=Score[i][j];
	return sum;
}
int print(char Student_Name[][10],int Score[][3])
{
	int i,j,sum,avg;
	for(i=0;i<4;i++)
	{
		cout<<Student_Name[i]<<"  ";
		for(j=0;j<3;j++)
			cout<<" "<<Score[i][j]<<"\t";
		cout<<total(Score,i)<<"\t"<<total(Score,i)/3;
		cout<<endl;
	}
}
