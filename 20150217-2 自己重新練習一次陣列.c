/*
		張		王		李		趙		周 
math	80		61		59		85		76
c		75		65		63		87		77
foxpro	92		71		70		90		85
求各科目的平均成績和總平均成績。
*/
#include<stdio.h>
#include<stdlib.h>
int main (void){
	int j,k,s=0,v[3];
	int a[3][5]={{80,61,59,85,76},{75,65,63,87,77},{92,71,70,90,85}};
	for (j=0;j<3;j++){
		for (k=0;k<5;k++){
			s+=a[j][k];
		}
		v[j]=s/5;
		s=0;
	}
	printf("math平均為:%d\nc平均為:%d\nfoxpro平均為:%d\n",v[0],v[1],v[2]);
	printf("總平均成績:%d\n",(v[0]+v[1]+v[2])/3);
	system ("pause");
	return 0;
}
