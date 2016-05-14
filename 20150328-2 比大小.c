#include <stdio.h>
#define cnd "calc"
void main(){  //同優先級的狀況下程式是從左到右去運行的 
	printf("%d\n",5==5==1);//答案是1
	printf("%d",0==1>2);// (1>2)==0 	0==0  	1 所以答案是1 
//	> < >= <= 優先級都大於 == != 

//	字串之間 >= > < <=都沒有任何意義 只有!= ==才有意義 
//	字串的變量 會另外開闢新的地址
//	所以定義的地址 和變量的地址不同 
	char str[]="calc";
	printf("%x,%x\n",cnd,str);
	cnd==str?printf("成立"):printf("不成立"); 
	
}
