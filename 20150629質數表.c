#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include <math.h>
bool prime[999999];// �����ܼƪ��}�C�A�C�@��N�۰ʪ�l�Ƭ�false�C
int All_prime()
{
	int i, j, k,w=0;
	int sqrt_prime = sqrt(999999);
	prime[0] = prime[1] = true;
	for (i = 2; i <= sqrt_prime; i++)
	{
		if (!prime[i])
		{
			for (k = (200000 - 1) / i, j = i*k; k >= i; k--, j-= i)     //k�O���v j�O����  0.01��⧹ 
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
			printf("�D���\n",num);
		else
			printf("���\n",num);
	}
}

