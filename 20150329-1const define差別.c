#include <stdio.h>
#define a 10
void main1()
{
//	printf("%d",&a);     define宣告後的東西放在常量區 無法修改
	const int b=10;
//	int b=12;    會出錯 const 代表不能修改 但是從外掛，內存就可以去修改 
	printf("%x",&b); 
}
void main()  //判斷數列裡有多少個數字 
{
	int i;
	int c[]={2,3,4,5};
	for(i=0;i<sizeof(c)/sizeof(int);i++){
		printf("c[%d]=%d\n",i,c[i]);
	}
	printf("總共有%d個數字",sizeof(c)/sizeof(int));
	prrintf("\n");
	printf("%d",5==5==1);
//	如果條件成立顯示1 條件不成立顯示0 
//	printf("%x",&c);
}
