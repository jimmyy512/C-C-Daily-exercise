/*
1 71
2 83
3 67
4 49
5 59
計算總分和平均   用陣列寫 
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	double sum=0,avg;
	int i=0,t[5]={71,83,67,49,59};
	for (i=0,sum=0;i<5;i++)
		sum+=t[i];
	avg=sum/5;
	printf ("總分為%.2f\n",sum);
	printf ("平均為%.2f",avg);
	return 0;
}

