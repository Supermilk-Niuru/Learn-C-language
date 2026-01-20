#include<stdio.h>
int search(int key,int a[],int len)
{
    int set = -1;
    int i;
    for(i=0;i<len;i++)
    {
        if(a[i]==key)
        {
            set = i;
            break;
        }
    }
    return set;
}
int main()
{
    int a[]={2,3,4445,56,4576,78,43,778};
    int m;
    int r;
    scanf("%d",&m);
    r = search(m,a,sizeof(a)/sizeof(a[1]));
    printf("%d\n",r);
    return 0;
}