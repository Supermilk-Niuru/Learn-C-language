#include<stdio.h>
void point1();
int point2(int num1,int num2);
int main()
{
    void(*p1)()=point1;
    int(*p2)(int,int)=point2;
    int num1 = 10;
    int num2 = 100;
    p1();
    int sum = p2(num1,num2);
    printf("%d\n",sum);
    return 0;
}
void point1()
{
    printf("point1\n");
}
int  point2(int num1,int num2)
{
    return num1+num2;
}