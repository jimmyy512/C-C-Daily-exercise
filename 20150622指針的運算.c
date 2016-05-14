#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,num[]={1,2,3,4,5,6,7,8,9,10};
	for (i=0;i<10;i++)
	{
		printf("%X,%d\n",&num[i],num[i]);
	}
	int *p=&num[0];
	printf("%d\n",*p++); //這是讓指針{指向下一個數組 } 
	printf("%x\n",p);
	printf("num[0]=%d num[1]=%d\n",num[0],num[1]);
	
	p=&num[0];//上面程式把指針指向了num[1] 所以把他初始化 重新指向num[0] 
	
	printf("%d\n",(*p)++);//這是把指針目前指向的值 數值+1 
	printf("%x\n",p);
	printf("num[0]=%d num[1]=%d\n",num[0],num[1]);
	system("pause");
	return 0;
}
