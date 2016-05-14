/*
		張		王		李		趙		周 
math	80		61		59		85		76
c		75		65		63		87		77
foxpro	92		71		70		90		85
求個人的平均成績和全班總平均成績。
*/
#include<stdio.h>
#include<stdlib.h>
int main (void){
int i,j,s=0, average,v[5];
int a[3][5]={
	{80,61,59,85,76},
	{75,65,63,87,77},
	{92,71,70,90,85}
	};
for(i=0;i<5;i++){ //求個人 所以大迴圈為5 
	for(j=0;j<3;j++){
   		s+=a[j][i];
  	}
  	v[i]=s/3;
   	s=0;
}
average=(v[0]+v[1]+v[2]+v[3]+v[4])/5;
printf("張%d\n王%d\n李%d\n趙%d\n周%d\n",v[0],v[1],v[2],v[3],v[4]);
printf("total:%d\n",average);
	return 0;
}
