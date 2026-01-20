#include<stdio.h>
int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];
    scanf("%d",&x);//用户第一次输入数字
    while (x!=-1)//当输入的值为-1的时候，循环就停止。
    {
        number[cnt] = x;
        sum += x;
        cnt++;
        scanf("%d",&x);//每执行一次循环，让用户输入一次
    }
    if( cnt >0 )//cnt=0 没有进行循环，故不输出。
    {
        int i;
        double average = sum / cnt;
        printf("%f\n",average);
        for ( i=0; i<cnt; i++)//遍历数组中每一个值
        {
            if( number[i] > average)
            {
                printf("%d \n",number[i]);
            }
        }
    }
    return 0;
}