#include<stdio.h>
int main()
{
    int a=0,i=1,m=0,sum=0;
    scanf("%d",&m);
    scanf("%d",&a);
    while((a>=0)&&(i<m))
    {
        
        sum += a;
        i++;
        scanf("%d",&a);
    }
    printf("%f\n",(double)sum/i);
    return 0;
}
