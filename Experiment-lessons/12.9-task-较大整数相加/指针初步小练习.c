#include<stdio.h>
#include<string.h>
void swap1(int x,int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    printf("swap 1 x=%d y=%d\n",x,y);
}

void swap2(int *p1,int *p2)
{
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
    printf("swap 2 *p1=%d *p2=%d\n",*p1,*p2);
}

void swap3(int *p1,int *p2)
{
    int *p;//野指针
    *p = *p1;
    *p1 = *p2;
    *p2 = *p;
    printf("swap 3 *p1=%d *p2=%d\n",*p1,*p2);
}

void swap4(int *p1,int *p2)
{
    int *p; //*代表目标
    p = p1;
    p1 = p2;
    p2 = p;
    printf("swap 4 p1=%d p2=%d\n",*p1,*p2);
}

int main()
{
    int a=100;
    int b=200;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    swap1(*p1,*p2);
    printf("swap 1 a=%d b=%d\n",a,b);
    swap2(&a,&b);
    printf("swap 2 a=%d b=%d\n",a,b);
    swap3(&a,&b);
    printf("swap 3 a=%d b=%d\n",a,b);
    swap4(&a,&b);
    printf("swap 4 a=%d b=%d\n",a,b);
}