#include<stdio.h>
int main()
{
    int a[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
    int (*p)[5] = a;
    int i;
    for(i=0;i<2;i++)
    {
        int j;
        for(j=0;j<5;j++)
        {
            printf("%d ",*(*p+j));
        }
        printf("\n");
        p++;
    }
}