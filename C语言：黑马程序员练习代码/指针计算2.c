#include<stdio.h>
int main()
{
    int a[]={0,1,2,3,4,5,6,7};
    //int *p=a;
    int *p1=&a[6];
    int *p2=&a[0];
    printf("%ld\n",p2-p1);
    //printf("%d\n",*(p+2));
}