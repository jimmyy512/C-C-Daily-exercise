/*
(1912) �~�����إ��ꤸ�~�C�q������F���K�H���إ���긹�O�~�ܤ�
�мg�@�{���A�N��J���褸�~���ഫ������~�����X�C
�d�ҿ�J �G  
2008
�d�ҿ�X �G
97
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int i,o;
	printf("��J�褸\n");
	scanf("%d",&i);
	if (i<1912)
		printf("��J���~");
	else{
		o=i-1912;
		o++;
		printf("����%d",o);
	} 
	return 0;
}
