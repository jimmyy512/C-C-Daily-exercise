#include <stdio.h>
#include <stdlib.h>
/*    A=10 �x�_��     J=18 �s�˿�     S=26 ������
      B=11 �x����     K=19 �]�߿�     T=27 �̪F��
      C=12 �򶩥�     L=20 �x����     U=28 �Ὤ��
      D=13 �x�n��     M=21 �n�뿤     V=29 �x�F��
      E=14 ������     N=22 ���ƿ�     W=32 ������
      F=15 �x�_��     O=35 �s�˥�     X=30 ���
      G=16 �y����     P=23 ���L��     Y=31 �����s
      H=17 ��鿤     Q=24 �Ÿq��     Z=33 �s����
      I=34 �Ÿq��     R=25 �x�n��
  (2) �^���ন���Ʀr, �Ӧ�ƭ����A�[�W�Q��ƪ��Ʀr
  (3) �U�Ʀr�q�k�쥪�̦������B���B���B���D�D�D�D��
  (4) �D�X(2),(3) �γ̫�@�X���M
  (5) (4)��10 �Y�㰣�A�h�� real�A�_�h�� fake
 �ҡG T112663836
2 + 7*9 + 1*8 + 1*7 + 2*6 + 6*5 + 6*4 + 3*3 + 8*2 + 3*1 + 6 = 180 */
int list(first)
{	
	first-=65;
	int i,city[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	for(i=0;i<26;i++)
	{
		if(city[first]==city[i])
			return city[i];
	}
}
int main()
{
	int i=0,j,k,tmp,tens,ones;
	char Num[10];
	while(scanf("%s",&Num)!=EOF)	
	{
		int resault=0,d;
		tmp=list(Num[0]);
		tens=tmp/10;	//�Q��� 
		ones=tmp%10;	//�Ӧ�� 
		for(i=1,d=8;i<10;i++,d--)
		{
			Num[i]=Num[i]-'0';  //�r���ন��� 
			if(i<9)
				resault=resault+Num[i]*d;
		}
		resault=resault+tens+ones*9+Num[9];
		if(resault%10==0)
			printf("real\n");
		else
			printf("fake\n");
	}
}

