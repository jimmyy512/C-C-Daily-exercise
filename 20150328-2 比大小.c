#include <stdio.h>
#define cnd "calc"
void main(){  //�P�u���Ū����p�U�{���O�q����k�h�B�檺 
	printf("%d\n",5==5==1);//���׬O1
	printf("%d",0==1>2);// (1>2)==0 	0==0  	1 �ҥH���׬O1 
//	> < >= <= �u���ų��j�� == != 

//	�r�ꤧ�� >= > < <=���S������N�q �u��!= ==�~���N�q 
//	�r�ꪺ�ܶq �|�t�~�}�P�s���a�}
//	�ҥH�w�q���a�} �M�ܶq���a�}���P 
	char str[]="calc";
	printf("%x,%x\n",cnd,str);
	cnd==str?printf("����"):printf("������"); 
	
}
