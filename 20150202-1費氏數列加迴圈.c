/*¦C¥X 
 1
 1  2
 3  5  8
13 21 34 55 */
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int j,k,a=0,b=1,c;
	for (j=1;j<=4;j++)
	{
		for (k=1;k<=j;k++)
		{
			c=a+b;	
			printf("%4d ",c);
			b=a;
			a=c;
		}	
		printf("\n");	
	}
	return 0;
}
