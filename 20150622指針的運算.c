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
	printf("%d\n",*p++); //�o�O�����w{���V�U�@�ӼƲ� } 
	printf("%x\n",p);
	printf("num[0]=%d num[1]=%d\n",num[0],num[1]);
	
	p=&num[0];//�W���{������w���V�Fnum[1] �ҥH��L��l�� ���s���Vnum[0] 
	
	printf("%d\n",(*p)++);//�o�O����w�ثe���V���� �ƭ�+1 
	printf("%x\n",p);
	printf("num[0]=%d num[1]=%d\n",num[0],num[1]);
	system("pause");
	return 0;
}
