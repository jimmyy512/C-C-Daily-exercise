#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
�d�ҿ�J �G  help
2222222222222222222222222 + 1111111111111111111111111
2222222222222222222222222 - 1111111111111111111111111
2222222222222222222222222 * 1111111111111111111111111
2222222222222222222222222 / 1111111111111111111111111
�d�ҿ�X �G

3333333333333333333333333
1111111111111111111111111
2469135802469135802469135308641975308641975308642
2
*/
#define debug
int i,j,k;
int main()
{
	char inputer [50]={0};
	while(gets(inputer)!=0)//�Ů欰asc ii '32'
	{
		int ctrl=0;
		char a[50]={0},b[50]={0};
//		for(i=0;i<strlen(inputer);i++) //��J���~���� 
//		{
//			if(inputer[i]==32)
//				ctrl++;
//			if(ctrl==0)
//			{
//				printf("��J���~!�O�o�B��Ÿ��e�� �[�W�ť�\n");
//				goto start;
//			}
//				
//		}
		for(i=0;i<strlen(inputer);i++)  //��Ĥ@�q�Ʀr�s�i�}�Ca 
		{
			if(inputer[i]==32)//�Ů欰asc ii '32'
				break;
			a[i]=inputer[i]-'0';
		}
		for(i=0,j=strlen(a)+3;i<strlen(inputer)-(strlen(a)+3);i++,j++)  //��ĤG�q�Ʀr�s�i�}�Cb
			b[i]=inputer[j]-'0';
#ifdef debug
		printf("\n a�}�C:"); 	//debug  
		for(i=0;i<strlen(a);i++)//a�}�C���� 
		{
			printf("%d",a[i]);
		}
		printf("\n b�}�C:");
		for(i=0;i<strlen(b);i++)//b�}�C���� 
		{
			printf("%d",b[i]);
		}
		printf("\n\n");
#endif
		
	}
}
