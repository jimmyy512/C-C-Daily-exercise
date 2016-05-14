#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int *p;
	int a[5] = { 3, 6, 7, 1, 4 };
	for (p = a; p<a + 5; p++)
	{
		*p = 100;
	}
	for (i = 0; i<5; i++)
		printf("a[%d]=%d\n", i, a[i]);
	system("pause");
}
