#include <stdio.h>
int main()
{
	char a[]="******************";
	int i=0;
	for (i=0;i<9;i++) 
		printf("%.*s%*s%.*s\n",9-i,a,2*i,"",9-i,a);
	for (i=8;i>=0;i--) 
		printf("%.*s%*s%.*s\n",9-i,a,2*i,"",9-i,a);
	return 0;
}
