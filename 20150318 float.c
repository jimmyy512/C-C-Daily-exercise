#include <stdio.h>
#include <stdlib.h>
#include <limits.h>//int ������ 
#include <float.h>//float������ 
void main()
{
	float a,b=7,s=3;
	a=b/s;
	printf("%d,%f",sizeof(int),sizeof(float));//int float �e�|�Ӧr�`
	printf("\nint���j��%d,���p��%d",INT_MAX,INT_MIN);
	
	printf("\nfloat���j��%f\n���p��%.100f",FLT_MAX,a);
	//%.100f=�p���I�᭱100�� 
}

