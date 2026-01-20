#include<stdio.h>
void out(int a[],int t,int *max,int *min);
int main()
{
    int a[]={1,3,4,5,6,7,7,8,10,19};
    int t = sizeof(a)/sizeof(a[0]);
    int max = a[0];
    int min = a[0];
    out(a,t,&max,&min);
    printf("max=%d\n",max);
    printf("min=%d\n",min);
}
void out(int a[],int t,int *max,int *min)
{
    int i=0;
    for(i=0;i<t;i++)
    {
        if(a[i]>*max)
        {
            *max = a[i];
        }
        if(a[i]<*min)
        {
            *min = a[i];
        }
    }
}