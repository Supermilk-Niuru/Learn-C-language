#include<stdio.h>
#include<string.h>
typedef union Money
{
    int money1;
    double money2;
    char money3[100];
}M;
int main()
{
    M m;
    m.money1 = 13;
    
    printf("%lf\n",m.money2);
    printf("%lu\n",sizeof(m));
}