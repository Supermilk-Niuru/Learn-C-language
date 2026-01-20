#include<stdio.h>
void change(int n);
int main()
{
    int n;
    scanf("%d",&n);
    change(n);
    return 0;
}
void change(int n)
{
    int i,j;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int k = i;
        for(j=i+1;j<n;j++)
        {
            if(a[k]>a[j])
            {
                k = j;
            }
        }
        if(k!=i)
        {
            int t = a[k];
            a[k]=a[i];
            a[i]=t;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}