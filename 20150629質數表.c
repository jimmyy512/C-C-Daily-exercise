#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include <math.h>
bool prime[999999];// 办跑计皚–盢笆﹍てfalse
int All_prime()
{
	int i, j, k,w=0;
	int sqrt_prime = sqrt(999999);
	prime[0] = prime[1] = true;
	for (i = 2; i <= sqrt_prime; i++)
	{
		if (!prime[i])
		{
			for (k = (200000 - 1) / i, j = i*k; k >= i; k--, j-= i)     //k琌瞯 j琌计  0.01衡Ч 
			{
				printf("k=%d,j=%d,i=%d\n",k,j,i);
				if (!prime[k])
				{
					prime[j] = true;
				}
			}
		}
	}
	return 0;
}
int main()
{
	int num,i;
	All_prime();
	while (scanf("%d", &num) != EOF)
	{
		if (prime[num]==true)
			printf("獶借计\n",num);
		else
			printf("借计\n",num);
	}
}

