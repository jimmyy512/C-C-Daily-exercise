/*
�D�ӤHBMI�ȡH�çP�_���зǻP�_�HBMI=�魫/(����*����)�A�����H����(M)�����
�魫�H����(KG)����� �C
�]�@�@BMI��18.5 �A�п�X���魫�L�����C
    23�֡�BMI�֡�18.5�A�п�X���з��魫���C
    25��BMI��23�A�п�X���魫�L�����C
   �@�@BMI�֡�25�A�п�X���έD�a�ڡ��C�^
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){
	
	float w,h,bmi=0;
	printf("�魫(kg)?\n");
	scanf("%f", &w);
	printf("����(m)?\n");
	scanf("%f", &h);
	bmi = w / (h*h);
	printf("bmi=%.1f",bmi);
	if (bmi>=25)
		printf ("�έD�a��\n");
	else if (bmi>23)
		printf ("�魫�L��\n");
	else if (bmi>=18.5)
		printf ("�з��魫\n");
	else if (bmi>0)
		printf ("�魫�L��\n");
	else 
		printf ("��J���~");
	return 0;
}
