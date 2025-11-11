#include<stdio.h>

void task2(int n)
{
    int a,b,c;
    int max,mid,min;
    if(n>=100 && n<=999)
    {
        a = n/100;
        b = n%100/10;
        c = n%10;
        printf("a=%d,b=%d,c=%d\n",a,b,c);
        max = min = a ; //假设法，类似打擂台
        if(b>max) max = b;
        if(c>max) max = c;  //不能写成else if
        if(b<min) min = b;
        if(c<min) min = c;
        mid = a+b+c-max-min;
        printf("the max is %d\n",100*max+10*mid+min);
        printf("the min is %d\n",100*min+10*mid+max);
    }
    else
        printf("invalid input\n");
}

void task2_1(int n)
{
    int a,b,c;
    int max,mid,min;
    if(n>=100 && n<=999)
    {
        a = n/100;
        b = n%100/10;
        c = n%10;
        printf("a=%d,b=%d,c=%d\n",a,b,c);
        if(a>b && a>c) max = a;
        else if (b>a && b>c) max = b;
        else max = c;
        
        if(a<b && a<c) min = a;
        else if (b<a && b<c) min = b;
        else min = c;
        
        mid = a+b+c-max-min;
        printf("the max is %d\n",100*max+10*mid+min);
        printf("the min is %d\n",100*min+10*mid+max);
    }
    else
        printf("invalid input\n");
}

int main()
{
    int n;
    printf("input an three integer: ");
    scanf("%d",&n);
    task2(n);//task2_1(n)
}