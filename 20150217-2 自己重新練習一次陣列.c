/*
		�i		��		��		��		�P 
math	80		61		59		85		76
c		75		65		63		87		77
foxpro	92		71		70		90		85
�D�U��ت��������Z�M�`�������Z�C
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
	printf("math������:%d\nc������:%d\nfoxpro������:%d\n",v[0],v[1],v[2]);
	printf("�`�������Z:%d\n",(v[0]+v[1]+v[2])/3);
	system ("pause");
	return 0;
}
