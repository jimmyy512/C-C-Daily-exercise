#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	if(a<b)   //if:a^b=c   then:c^b=a,c^a=b
	{//a=18   b=21
	//  7  18  21
		a =a ^ b;
	//  18 21  7
		b =b ^ a;
	//  21 7   18
		a =a ^ b;
	}//a=21   b=18
	printf("max=%d,min=%d",a,b);
}
