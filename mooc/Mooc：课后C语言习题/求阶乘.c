#include<stdio.h>
int main()
{
    int i,n = 1,a;
    scanf("%d",&a);
    for(i=1;n<=a;n++)
    {
        i *= n;
        //printf("%d\n",n);
    }
    printf("%d\n",i);
    return 0;
}

