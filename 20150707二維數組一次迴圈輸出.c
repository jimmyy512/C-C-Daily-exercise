#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int Stu[3][4]={{76,80,55,78},{90,51,68,65},{99,100,60,66}},i;
	for (i = 0; i < 12; i++) //1~100存入2維數組的方法2
	{
		printf("%3d ", Stu[i / 4][i % 4]);
		if ((i+1) % 4==0)  //換行
			printf("\n");
	}
}
