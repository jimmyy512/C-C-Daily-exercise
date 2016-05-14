#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num=10;
	char str='A';
	double db=10.8;
	void *p=&num;    //void空類型指針可以存取任意類型的數字 
	p=&str;
	p=&db;
	//printf("%d\n",*p);//但是雖然空指針能容納任意類型 雖知道地址 卻不知從哪裡結束 因此無法打印
	*((double *)p)=20.8;//強制類行轉換後 並賦予值修改db的內容 
	//printf("%f\n",p);//還是不行 雖然上方轉換過double 類型 但實質上還是void類型的指針
	//					因此要打印出值時還是要強制類型轉換  
	printf("%f\n",*((double *)p));  //*()取出內容 (double *)轉換成double類型 明確告訴大小 所以能打印 
}
