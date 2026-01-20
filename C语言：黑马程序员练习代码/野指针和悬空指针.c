#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("%d\n",*p);
    printf("%p\n",p);
    p = p+4;
    printf("%d\n",*p);
    printf("%p\n",p);
    return 0;
}