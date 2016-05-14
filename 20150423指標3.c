#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=&a[0];
    printf("*p=%d,p=%d\n",p,*p);
    (*p)++;
    printf("*p=%d\n",*p);
    printf("a[0]=%d,&a[0]=%d\n",a[0],&a[0]);
    p++;
    printf("p=%d,*p=%d\n",p, *p);
    printf("&a[1]=%d\n",&a[1]);
    printf("p+2=%d,&a[3]=%d\n",p+2,&a[3]);
    printf("p+3=%d,&a[4]=%d\n",p+3,&a[4]);
    printf("*(p+2)=%d\n",*(p+2));
    printf("*(p+3)=%d\n",*(p+3));
           system("pause");
    return 0;
}

