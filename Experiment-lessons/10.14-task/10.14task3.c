#include<stdio.h>
#include<math.h>  
void valueswap()//交换：引入中间变量；综合a和b的信息,用加法，减法，乘法（容易超出取值范围），除法都可以试试；本题除法不行；位运算，异或也可以（最好的）。
{
    int a = 100, b = 200;
    a= a + b;
    b= a - b;
    a= a - b;   //a= a ^ b;b= a ^ b;a= a ^ b;(异或运算)
    printf("a=%d,b=%d\n",a,b);
}
int main()
{
    int a,b;
    printf("task3\n");
    printf("input two number:");
    scanf("%d",&a);
    scanf("%d",&b);
    valueswap(a,b);
}

