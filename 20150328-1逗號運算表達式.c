#include <stdio.h> 
void main (){//�r���B����u���ŬO�̧C��,����B��ų��n����r��
// �Ҧpnum=(1+3,3*4,7+4)  num=11 
	int a,b,c,d,e,num,u,i;   
	num=(u=1+3,3*4,7+4);
	a=(a=3,6*3);//           a=18  18
	b=b=3,6*3;//             b=3   18
	c=3,c+=2,i=c+3;//          c=5    8
	d=3*5,a*4;//             d=15  60
	(e=3*5,a*4),a+5;//       e=15  20
//	int i=1,2;  ���[�A�� �����u���v�|�j��r�� �ҥH�|�X�� 
//  int i=(1,2);  i=2   �o�~�O���T���g�k 
	printf("\n%d",i);
	printf("num=%d\n\n\n",num);
	printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d",a,b,c,d,e);
	printf("\n");//�Ť@�� 
	printf("��"),printf("�s��"),printf("���v�t"); //�r���Ϊk
	printf("%d",u);
}
