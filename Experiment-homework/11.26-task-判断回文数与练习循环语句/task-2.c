//从键盘上输入一个n（n<=8）位十六进制整数，判断该十六进制数是否为回文数。例如：输入8A9A8，输出Yes，输入F33F，输出Yes，输入8A98A，输出No。 
//【要求：不使用数组，用函数实现，在main中调用】。
#include<stdio.h>
int judge(int x,int y)
{
    int i,b,c;
    for(i=0;i<(x/2);i++)
    {
        b = (y>>(x-i-1)*4)&0xf;
        c = (y>>i*4)&0xf;
        if(b!=c)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int flag,n,a;
    printf("请输入十六进制数位数:");
    scanf("%d",&n);
    printf("请输入该十六进制数:");
    scanf("%x",&a);
    flag = judge(n,a);
    if(flag)
    {
       printf("Yes\n"); 
    }
    else
    {
        printf("No\n");
    }
}

