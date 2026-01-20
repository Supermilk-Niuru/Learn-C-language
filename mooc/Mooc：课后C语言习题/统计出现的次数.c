#include<stdio.h>
#define NUM 10
void calculate()
{
    int i;
    int count[NUM];
    for( i=0; i<NUM; i++)
    {
        count[i] = 0;
    }
    int x;
    scanf("%d",&x);
    while( x!=-1 )//明确的终止条件
    {
        if( x>=1 && x<=9)
        {
            count[x] ++;
        }
        scanf("%d",&x);
    }
    for( i=0; i<NUM; i++)
    {
        printf("%d:%d\n",i,count[i]);
    }
}
int main()
{
    calculate();
    return 0;
}