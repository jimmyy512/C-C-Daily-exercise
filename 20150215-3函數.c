/*
		張		王		李		趙		周 
math	80		61		59		85		76
c		75		65		63		87		77
foxpro	92		71		70		90		85
求各科目的平均成績和總平均成績。
*/
#include<stdio.h>
#include<stdlib.h>
int i,j,s=0, average,v[3];
int a[5][3]={{80,75,92},{61,65,71},{59,63,70},{85,87,90},{76,77,85}};
int Hello(){
    average=(v[0]+v[1]+v[2])/3;
	printf("math:%d\nc languag:%d\ndbase:%d\n",v[0],v[1],v[2]);
//	printf("total:%d\n",average);
	return average;
}
void main(){
for(i=0;i<3;i++){
	for(j=0;j<5;j++){
   		s+=a[j][i];
  	}
  	v[i]=s/5;
   	s=0;
}
int av=Hello();
	printf("total:%d\n",av);
	return 0;
}
