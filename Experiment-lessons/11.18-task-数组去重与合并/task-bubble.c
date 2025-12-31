#include<stdio.h>
#define NUM 10
void bubble(int a[],int n)
{
    int j;
    int t;
    for(j=0;j<NUM;j++)
    {
        if(a[j]<a[j+1])
        {
            t = a[j];
            a[j+1] = a[j];
            a[j+1] = t;
        }
    }
    for(j=0;j<NUM-1;j++)
    {
        printf("%-2d\n",a[j]);
    }
}
int main()
{
    int i;
    int a[NUM];
    for(i=0;i<NUM;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,i);
    return 0;
}