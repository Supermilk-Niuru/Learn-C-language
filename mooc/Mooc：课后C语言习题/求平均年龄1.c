/*
#include<stdio.h>
double caculate(int n)
{
    int a,b=0,c=1;
    double result;
    scanf("%d",&a);
    if((a>=15)&&(a<=25));
    else
    {
        return 0;
    }
    b = a;
    while(((a>=15)&&(a<=25))&&(c<=n))
    {
        scanf("%d",&a);
        b += a;
        c++;
        if(c==n)
        {
            break;
        }
    }
    result = b/n;
    return result;
}
int main()
{
    int n;
    double m;
    scanf("%d",&n);
    if((n>=1)&&(n<=100));
    else 
        return 1;
    m = caculate(n);
    printf("%.2f\n",m);
    return 0;
}
*/



#include<stdio.h>
double caculate(int n)
{
    int a,b=0,c=1;
    double result;
     while(c<=n)
    {
        scanf("%d",&a);
        b += a;
        c++;
        if((a<15)||(a>25))
        {
            break;
        }
    }
    result = b/n;
    return result;
}
int main()
{
    int n;
    double m;
    scanf("%d",&n);
    if((n>=1)&&(n<=100));
    else 
        return 1;
    m = caculate(n);
    printf("%.2f\n",m);
    return 0;
}