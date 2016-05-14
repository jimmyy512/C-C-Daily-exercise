#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a=100,b=200,c=300;
    int *p;
    p=&a;
    printf("&a=%d\n",&a);
    printf("&b=%d\n",&b);
    printf("&c=%d\n",&c);
    printf("p=%d\n",p);
    printf("*p=%d\n",*p);
    p=&b;
    printf("*p=%d\n",*p);
    *p=234;
    printf("*p=%d\n",*p);
    
    system("pause");
    return 0;
}

