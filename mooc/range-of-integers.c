#include<stdio.h>
int main()
{
    double r;
    double ff = 1234.56789;
    char c = 129;
    int a = 026;
    int m = 0x16;
    r = 0.1 + 0.2;

    printf("c=%d a=%d m=%d r=%.18lf\n",c,a,m,r);
    printf("ff=%e ff=%f\n",ff,ff);//%e是按照科学计数法表示
   
    printf("结果是%.3f\n",0.0043);
    printf("结果是%.4f\n",0.0043);
    printf("结果是%.3f\n",0.0046);
    printf("结果是%.4f\n",0.0046);
    
    printf("结果是%.3f\n",0.0045);
    printf("结果是%.2f\n",0.0045+0.0045);
    printf("结果是%.4f\n",0.0045);
    
    printf("结果是%.3f\n",0.00056);
    printf("结果是%.3f\n",0.00054);
    printf("结果是%.3f\n",0.00066);//注意观察输出，在计算机内部都是二进制，所以有些小数是无法表示的，只能近似。所以最后输出的都是与输入最接近的数。
    
    printf("结果是%.300d\n",2/3);
    return 0;
}