/*
将整数i，以16进制，带前缀，宽度为10，右对齐，不足补0的方式显示
将浮点数f，以宽度为10，精度为3，强制显示小数点左对齐的方式显示（以小数点和指数两种方式显示）
*/

#include<stdio.h>
int main()
{
    int i = 65537;
    float f =123.45678;
    char c;
    printf("%#010hx\n",i);
    printf("%-#10.3f\n",f);//左对齐精度为3，宽度为10，强制输出小数点。
    puts("input an integer!");
    scanf("i=%d\n",&i);
    fflush(stdin);
    c = getchar();
    printf("i=%d,c=%c\n",i,c);
    return 0;
}


