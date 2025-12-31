#include<stdio.h>
void task1(int n)           //明确求什么东西，知道连续奇数的第一个，就可以求解。 int n表示给定一个数n
{
    int m,sum;              //需要求和，知道m(连续奇数的个数)
    int i,j;
    int h = n*n*n;
    int flag = 0;
    for(i=1;i<h/2;i+=2)     //外层循环判断，内层循环累加。用i开始尝试累加，最后i就是连续奇数的第一个。i控制每一次循环的奇数
    {
        sum = 0;
        m = 0;              //每一次累加前要归零
        for(j=i;sum<h;j+=2) //不能用<=,因为用了会多加一个数（！！！）j用来控制循环的次数 
        {
            sum += j;
            m++;
        }
        if(sum==h)
        {
            flag = 1;
            break;          //作用于外层的for循环
        }
    }
    if(flag)
    {
        printf("%d^3=",n);//输出m个奇数，要用循环输出。
        for(j=1;j<=m;j++,i+=2)
        printf(j==m?"%d\n":"%d+",i);
    }
    else
        printf("failed to find\n");
    }
int main()
{
    int n;
    printf("input an integer:");
    scanf("%d",&n);
    task1(n);
    return 0;
}