#include<stdio.h>
int main()
{
    int n=0,x;
    printf("请输入一个整数");
    scanf("%d",&x);
    x /= 10;
    n++;
    while(x>1)
    {
        n++;
        x /= 10;
    }
    printf("%d位数\n",n);
    return 0;
}
    