#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    
    printf("&a[0]=%d, a=%d\n", &a[0],a);
    p=a;
    printf("*p=%d\n",*p);
    printf("*(p+6)=%d\n",*(p+6));
    printf("*(a+6)=%d\n",*(a+6));
    printf("p[6]=%d\n",p[6]);
    p=&a[5];
    printf("p[3]=%d\n",p[3]);
    
    system("pause");
    return 0;
}

