#include <stdio.h>
#define PI 3.14
double calArea(int r)
{
    double area;

    area  = PI*r*r;
    return  area;
}
int main()
{
    double area;
    int r;
    printf("input an integer as radiu\n");
    scanf("%d",&r);
    area = calArea (r);
    printf("the area of the cycle is %lf\n",area);
}