
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
½d¨Ò¿é¤J ¡G  
20
17
999997
261855
½d¨Ò¿é¥X ¡G

2^2 * 5
17
757 * 1321

*/
int main ()
{
	int Input;
	while(scanf("%d",&Input)!=EOF)
	{
		int i,count=0;
		for(i=2;i*i<=Input;i++)
		{
			while(Input%i==0)
			{	
				count++;
				Input=Input/i;
			}
			if(count==1)
				printf("%d * ",i);
			if(count>1)
				printf("%d^%d * ",i,count);
			count=0;
		}
		if(Input>1)
			printf("%d\n",Input);
		
	}
}
