#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int start,end,result,tmp=0;
	printf("��J�q�X�Ӷ}�l=");
	scanf("%d",&start);
	printf("��J�q�X�ӵ���=");
	scanf("%d",&end);
	srand(time(NULL));
	while(tmp<start)
		tmp=rand()%end+1;
	printf("����%d�� ����!!!\n",tmp);
	system("pause");
}

