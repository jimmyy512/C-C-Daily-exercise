/*
輸入月份（月份為一個正整數），判斷此月份在四季（春、夏、秋或冬）中的哪一季 ？
春：3~5月，夏：6~8月，秋：9~11月，冬：12月以及1-2月
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int m;
	printf("請輸入月份\n");
	while (scanf("%d",&m)!=EOF){
		if (m<=0){
			printf("沒這個月份喔!請重新輸入!\n");
			continue;
		}
		else{
			if (m==12 || m<=2)
				printf("冬季\n");
			else if (m<=5)
				printf("春季\n");
			else if (m<=8)
				printf("夏季\n");
			else if (m<=11)
				printf("秋季\n");
			else
				printf("輸入錯誤請重新輸入!\n");
		}
	}
	return 0;
}
