// 1. 如果一个正整数等于其各个数字的立方和，则称该数为阿姆斯特朗数（亦称为自恋性数）。如407=43+03+73就是一个阿姆斯特朗数。编写程序求1000以内的所有阿姆斯特朗数。
#include<stdio.h>
#define NUM 1000
void calculate()
{
    int i,a,b,c,d,n=0;
    for(i=1;i<NUM;i++)
    {
        a = i/100;       //百位上的数
        b = (i-a*100)/10;//十位上的数
        c = i-100*a-10*b;//个位上的数
        d = a*a*a+b*b*b+c*c*c;
        if(d==i)
        {
            printf("%d\n",i);
            n++;        //计算阿姆斯特朗数的个数
        }
    }
    printf("阿姆斯特朗数共%d个\n",n);
}
int main()
{
    printf("1000以内的阿姆斯特朗数为:\n");
    calculate();
}
