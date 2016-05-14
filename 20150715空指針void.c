#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int num=10;
	double db=9.8;
	int *pnum=&num;
//	int *pdb=&db;  //db是double類型數字 若用int類型指針會出現警告 .cpp檔下會出現錯誤
// 	c++要求較嚴謹
	double *pdb=&db;
	void *p=&num;//void空類型指針可以存取任意類型的數字 
	p=&db;
//	printf("%f",*p);   //但是雖然空指針能容納任意類型 雖知道地址 卻不知從哪裡結束 因此無法打印 
	printf("%f",*((double *)p));  //此時強制類型轉換成 double類型就明確告訴了指針 8 byte後結束
								//因此能夠打印出數值 
	 
}
