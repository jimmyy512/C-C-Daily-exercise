//��J�j�g�r���۰��ഫ�p�g�r��
//��J�p�g�r���۰��ഫ�j�g�r�� 
#include <stdio.h>
#include <stdlib.h>
int main(){
	char i;
	int a;
	printf("��J�@�Ӧr��\n");

	i=getchar();
//	printf("%c,%d\n",i,i);
	if(i>=65 && i<=90)
		printf("%c",i+32);
	if(i>=92 && i<=122)
		printf("%c",i-32);
	system("pause");
	
	return 0;
}

