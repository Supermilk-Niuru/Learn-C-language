#include<stdio.h>
int main()
{
    int a1[] = {1,2,3};
    int a2[] = {1,2,3,4,5};
    int a3[] = {1,2,3,4,5,6,7,8,9};
    int *(arr[3]) = {a1,a2,a3};
    int len1 = sizeof(a1)/sizeof(int);
    int len2 = sizeof(a2)/sizeof(int);
    int len3 = sizeof(a3)/sizeof(int);
    int length[3] = {len1,len2,len3};
    int i;
    for(i=0;i<3;i++)
    {
        int j;
        for(j=0;j<length[i];j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}