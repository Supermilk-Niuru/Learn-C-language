#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("%p\n",p);
    p = p+1;
    printf("%p\n",p);
}