#include<stdio.h>
int main()
{
    int a[]={0,1,2,3,4,5,6};
    printf("%lu\n",sizeof(a));
    printf("%lu\n",sizeof(&a));
    printf("%p\n",a);
    printf("%p\n",&a);
    printf("%p\n",a+1);
    printf("%p\n",(&a)+1);
}