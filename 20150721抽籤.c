#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int start,end,result,tmp=0;
	printf("輸入從幾樓開始=");
	scanf("%d",&start);
	printf("輸入從幾樓結束=");
	scanf("%d",&end);
	srand(time(NULL));
	while(tmp<start)
		tmp=rand()%end+1;
	printf("恭喜%d樓 中獎!!!\n",tmp);
	system("pause");
}

