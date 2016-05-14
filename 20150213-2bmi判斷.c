/*
求個人BMI值？並判斷體位標準與否？BMI=體重/(身高*身高)，身高以公尺(M)為單位
體重以公斤(KG)為單位 。
（　　BMI＜18.5 ，請輸出“體重過輕”。
    23＞＝BMI＞＝18.5，請輸出“標準體重”。
    25＞BMI＞23，請輸出“體重過重”。
   　　BMI＞＝25，請輸出“肥胖家族”。）
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	
	float w,h,bmi=0;
	printf("體重(kg)?\n");
	scanf("%f", &w);
	printf("身高(m)?\n");
	scanf("%f", &h);
	bmi = w / (h*h);
	printf("bmi=%.1f",bmi);
	if (bmi>=25)
		printf ("肥胖家族\n");
	else if (bmi>23)
		printf ("體重過重\n");
	else if (bmi>=18.5)
		printf ("標準體重\n");
	else if (bmi>0)
		printf ("體重過輕\n");
	else 
		printf ("輸入錯誤");
	return 0;
}
