#include<stdio.h>
void demo(int a,int b[],int *p,char c[]);
int main()
{
    int a = 10;
    int b[5]={1,2,3,4,5};
    int *p = b;
    char c[]= "hello world";
    demo(a,b,p,c);
}
void demo(int a,int b[],int *p,char c[])
{
    printf("%d\n",a);
    printf("000 %p\n",b);
    printf("%d\n",b[1]);
    printf("111 %p\n",p);
    printf("%s\n",c);
}