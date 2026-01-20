#include<stdio.h>
int main()
{
    int a =10;
    int b = 20;
    int *p = &a;
    int **pp = &*(p+1);
    printf("%p\n",p);
    printf("%p\n",pp);
    *pp = &b;
    *p = 100;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",p);
    printf("%p\n",pp);
    printf("%d\n",*p);
    printf("%d\n",**pp);
}