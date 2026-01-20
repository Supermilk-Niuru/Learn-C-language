#include<stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("%d",i);
        }
        else if((i+2)%2==1)
        {
            printf(" %d",i);
        }
    }
    return 0;
}
