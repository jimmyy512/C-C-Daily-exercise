/*
		�i		��		��		��		�P 
math	80		61		59		85		76
c		75		65		63		87		77
foxpro	92		71		70		90		85
�D�ӤH���������Z�M���Z�`�������Z�C
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
for(i=0;i<5;i++){ //�D�ӤH �ҥH�j�j�鬰5 
	for(j=0;j<3;j++){
   		s+=a[j][i];
  	}
  	v[i]=s/3;
   	s=0;
}
average=(v[0]+v[1]+v[2]+v[3]+v[4])/5;
printf("�i%d\n��%d\n��%d\n��%d\n�P%d\n",v[0],v[1],v[2],v[3],v[4]);
printf("total:%d\n",average);
	return 0;
}
