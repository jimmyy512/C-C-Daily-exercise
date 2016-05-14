/*
用while 迴圈來計算1+2+3+....+n<10000 最大的n? 
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int sum=0,i=1;
	while (sum<10000){
		sum+=i;
		if (sum>=10000){ //因為大於 所以多一次 減掉1就好!  
		printf("%d\n",i-1);
		}
		i++;
	}
	printf("%d",i); //當沒有經過if那段式子後 數字會多出2 所以要-2
					//很難解釋-2 要讓答案正確 printf("%d",i-2);
					//需要這樣寫 
	return 0;
}

