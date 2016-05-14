#include<stdio.h>
#include<stdlib.h>
int fun(int a)
{
    a=a+100;
    printf("fun>a=%d\n",a);
}
void fun2(int *a)
{
     *a=*a+100;
     printf("fun2>*a=%d\n",*a);
}
void swap(int *a, int*b)
{
     int tmp;
     tmp=*a; *a=*b; *b=tmp;
}
void sort(int *a,int *b,int *c)
{
     int tmp;
     if(*a>*b) {tmp=*a; *a=*b; *b=tmp;}
     
     if(*a>*c) {tmp=*a; *a=*c; *c=tmp;}
     
     if(*b>*c) {tmp=*b; *b=*c; *c=tmp;}
}
int main(void)
{
    int x=100,y=300,z=50;
    fun(x);
    printf("main > x=%d\n",x);
    fun2(&x);
    printf("main > x=%d\n",x);
    swap(&x,&y);
    printf("swap, x=%d, y=%d\n",x,y);
    sort(&x,&y,&z);
    printf("x=%d,y=%d ,z=%d\n",x,y,z);
    
       
       system("pause");
    return 0;
}

