#include<stdio.h>
void swap(int *p1,int *p2);
void swapswap(int p1,int p2);
int main()
{
    int a = 10;
    int b = 20;
    swapswap(a,b);
    swap(&a,&b);
    
    //printf("main %d %d\n",a,b);
}
void swap(int *p1,int *p2)
{
    int t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}
void swapswap(int p1,int p2)
{
    int t;
    t = p1;
    p1 = p2;
    p2 = t;
    printf("%d %d\n",p1,p2);
}