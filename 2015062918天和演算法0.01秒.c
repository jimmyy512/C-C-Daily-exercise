#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
bool prime[200000];
void All_prime()
{
	int i,j,k;
	for(i=0;i<200000;i++)
		prime[i]=true;
		//0 and 1���O��� 
	prime[0]=false;
	prime[1]=false;
	for(i=2;i<200000;i++)
	{
		if(prime[i])
		{
//			for(j=i*i;j<200000;j+=1)   //�ӺC  18.5�Ѻ⧹ 
//			{
//				prime[i]=false;
//				printf("test=%d\n",j);
//			}
//			
			for(k=(200000-1)/i;j=k*i;k--,j--)     //k�O���v j�O����  0.01��⧹ 
			{
				if(prime[k])
					prime[j]=false;
			}
		}
	}
}
int main()
{
	All_prime();
}

