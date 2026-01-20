#include<stdio.h>
typedef struct Student
{
    char c;
    int  a;
    char b;
    double d;
}S;
int main()
{
    S m;
    printf("%lu\n",sizeof(m));
    return 0;
}