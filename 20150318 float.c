#include <stdio.h>
#include <stdlib.h>
#include <limits.h>//int 的極限 
#include <float.h>//float的極限 
void main()
{
	float a,b=7,s=3;
	a=b/s;
	printf("%d,%f",sizeof(int),sizeof(float));//int float 占四個字節
	printf("\nint極大值%d,極小值%d",INT_MAX,INT_MIN);
	
	printf("\nfloat極大值%f\n極小值%.100f",FLT_MAX,a);
	//%.100f=小數點後面100位 
}

