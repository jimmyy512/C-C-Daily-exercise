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
//#define debug
int i,j,k;
//int divide(char a,char b)
//{
//
//}
//int multiply()
//{
//	
//}
char change(char *p,char *pb,int timeA,int timeB)//�e���� 
{
	for(i=0;i<timeA/2;i++)//a�Ʀr�洫�^�� 
	{
		char tmp=p[i];
		p[i]=p[timeA-1-i];   //�Ĥ@�өM�̫�@�ӥ洫 �ĤG�өM�˼ƲĤG�ӥ洫 
		p[timeA-1-i]=tmp;
	}
	for(i=0;i<timeB/2;i++)//b�Ʀr�洫�^�� 
	{
		char tmp=pb[i];
		pb[i]=pb[timeB-1-i];
		pb[timeB-1-i]=tmp;
	}
	return 0;
}
char minus(char *p,char *pb,int timeA,int timeB)//��Ƶ{�� 
{
	char op[50]={0};
	int tmp=timeA>timeB?timeA:timeB; //�P�_a�}�Cb�}�C���Ӥj 
	int sizemax=tmp;   //�s���̤j�� 
	int change=0;
	if(timeB>timeA)   //�p�Gb���Ʀr��a�h�Nab�洫�A�åB�h�[�ӭt�� 
	{
		char *tmper=p;
		p=pb;
		pb=tmper;
		printf("-");
		change++;
	}
	int scoreA=0,scoreB=0;
	if(timeA==timeB)     //�p�Ga�Ʀr�Mb�@�˦h �N���ۤ�Τ��ƭp�� ��ƶV�j �Q�ƶV�� ���ư��N��Ʀr�j 
	{
		for(i=tmp-1;i>=0;i--)
		{
			scoreA+=p[i]*(i+1);   //����̫�@�ӼƮ� ���୼�W0  ���M�̫�@�ӼƦr�L�k��� 
			scoreB+=pb[i]*(i+1);
		}
		if(scoreB>scoreA)  //�p�Gb�Ʀr��a�j �N�e��洫 �å��L�t�� 
		{
			char *tmper=p;
			p=pb;
			pb=tmper;
			printf("-");
			change++;
		}
	}
	int time=0,n=0,zero=0;			
	for(i=0,j=0;tmp>0;i++,j++,tmp--)//�ɦ�P�_���� 
	{
		op[i]+=p[i]-pb[j];
		if(p[i]<pb[j])
		{
			for(n=i+1;n<sizemax;n++)//�j��M��i�ɦ줧�� 
			{
				if(p[n]>=1)//�j�l1�N��i�ɦ줧�� 
				{
					p[n]-=1;
					op[i]=10-pb[i]+p[i];
					break;
				}
				if(p[n]==0)//�P�_�p�G�O0 ���ɦ�᪺�� 
				{
					p[n]=9;
				}
			}
		}
		if(p[i]==pb[i]) //�Ʀr�@�� �۴0 
		{
			zero++;
			if(zero==tmp)
			{
				printf("0");
				break;
			}
		}	
		time++;			//op�}�C�^��]�X�� 
	}
	int reset=0,k=time-1;
	int control=0;
	for(i=time-1;i>=0;i--)    ///���L���� 
	{
		if(control==0) //�ˬd�Ĥ@�ӼƦr�O���O0 
		{
			if(op[k]==0) //�O���ܸ��L  
			{
				control++;
				continue;
			}
			printf("%d",op[i]);
			control++;
		}
		else
			printf("%d",op[i]);
	}
	printf("\n");
}
char adder(char *p,char *pb,int timeA,int timeB)//�[���Ƶ{�� 
{
	char op[50]={0};
	int tmp=timeA>timeB?timeA:timeB,carry=0;//�P�_a�}�Cb�}�C���Ӥj 
	int time=0,control=0;			//op�}�C�^��]�X�� 
	for(i=0,j=0;tmp>0;i++,j++,tmp--)//a�}�C���� 
	{
		op[i]+=p[i]+pb[j]+carry;
		carry=0;
		if(op[i]>=10)
		{
			if(control==0) //�i�� �o�ӳW�h���L�o�{�u�n�j�l10"�j��i��" 
			{
				tmp++;
				control=1;
			}
			carry=op[i]/10;
			op[i]%=10;
		}
		time++;			//op�}�C�^��]�X�� 
	}
	int reset=0,k=time-1;
	control=0;
	for(i=time-1;i>=0;i--)
	{
		if(control==0) //�ˬd�Ĥ@�ӼƦr�O���O0 
		{
			if(op[k]==0) //�O���ܸ��L  
			{
				control++;
				continue;
			}
			printf("%d",op[i]);
			control++;
		}
		else
			printf("%d",op[i]);
	}
	printf("\n");
}
int main()
{
	char inputer [50]={0};
	while(gets(inputer)!=0)//�Ů欰asc ii '32'
	{
		int ctrl=0;
		char a[50]={0},b[50]={0};
		for(i=0;i<strlen(inputer);i++)  //��Ĥ@�q�Ʀr�s�i�}�Ca 
		{
			if(inputer[i]==32)//�Ů欰asc ii '32'
				break;
			a[i]=inputer[i];
		}
		for(i=0,j=strlen(a)+3;i<strlen(inputer)-(strlen(a)+3);i++,j++)  //��ĤG�q�Ʀr�s�i�}�Cb
			b[i]=inputer[j];
			
		int timeA=strlen(a);
		int timeB=strlen(b);
		change(a,b,timeA,timeB);
		for(i=timeA-1;i>=0;i--)  //��ascii�X�ର���  
			a[i]=a[i]-'0';
		for(i=0;i<timeB;i++)  //��ascii�X�ର��� 
			b[i]=b[i]-'0'; 
#ifdef debug
		printf("\n a�}�C:"); 	//debug  
		for(i=0;i<timeA;i++)//a�}�C���� 
		{
			printf("%d",a[i]);
		}
		printf("\n b�}�C:");
		for(i=0;i<timeB;i++)//b�}�C���� 
		{
			printf("%d",b[i]);
		}
		printf("\n\n");
#endif
		int add=0,min=0;
		for(i=0;i<strlen(inputer);i++) //�B��l 
		{
			if(inputer[i]=='+')
			{
				add++;
				
			}
			if(inputer[i]=='-')
			{
				min++;
			}
//			if(inputer[i]=='*')
//			{
//				multiply(a,b);
//			}
//			if(inputer[i]=='/')
//			{
//				divide(a,b);
//			}
		}
		if(add>0 || min>0)
		{
			
			if(add>0)
				adder(a,b,timeA,timeB);
			if(min>0)
				minus(a,b,timeA,timeB);
		}
	}
}
