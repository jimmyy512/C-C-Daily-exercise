/*
(1912) 年為中華民國元年。從此國民政府便以中華民國國號記年至今
請寫一程式，將輸入的西元年份轉換成民國年份後輸出。
範例輸入 ：  
2008
範例輸出 ：
97
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int i,o;
	printf("輸入西元\n");
	scanf("%d",&i);
	if (i<1912)
		printf("輸入錯誤");
	else{
		o=i-1912;
		o++;
		printf("民國%d",o);
	} 
	return 0;
}
