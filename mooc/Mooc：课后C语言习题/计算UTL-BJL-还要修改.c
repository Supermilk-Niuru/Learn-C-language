#include<stdio.h>
int main()
{
    int m,n=0,k=0,q=0;
    int a,b,c,d;
    scanf("%d",&m);
    if((m/100)<10)
    {
        a=0;
        
        b=m/100;
    }
    else
    {
        a=(m/100)/10;
        b=(m/100)-10; 
    }
    k = m-(1000*a)-(100*b);
    if((k<10)&&((a==0)&&(b==0)))
    {
        c = 0;
        d = k;
    }
    else
    {
        c = k/10;
        d = k-(10*c);
    }
    q = (a*10)+b-8;
    if(q<0)
    {
        q+=24;
        a = q/10;
        b = q-10*a;
    }
    else
    {
        a = q/10;
        b = q - 10*a;
    }
    n = a*1000 + b*100 + c*10 + d;
    printf("%d\n",n);
    return 0;
}