#include<stdio.h>
double calculate(int a)
{
    int i;
    int b;
    int c=0;
    double result;
    for(i=1;i<=a;i++)
    {
       scanf("%d",&b);
       if((b<15)||(b>25))
       {
            break;
       }
       c+=b;
    }
    result = (double)c/a;
    return result;
}
int main ()
{
    int n;
    double m;
    scanf("%d",&n);
    m = calculate(n);
    printf("%.2f\n",m);
    return 0;
}