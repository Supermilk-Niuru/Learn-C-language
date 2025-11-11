#include<stdio.h>
int main()    //vc可以写成void
{
    int a =10,b,c;
    unsigned short d= 65535;
    char ch1 = 124;
    char ch2 = 'A';
    float f1 =1.23456789;
    double f2 =9.87654321;
    
    float i = 2/3;
    
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    printf("d=%d\n",d);
    printf("ch1=%d,ch2=%d\n",ch1,ch2);
    printf("f1=%f,f2=%lf\n",f1,f2);
    printf("i=%f\n",i);
    return 1;
}   //没有数学运算符是不能做题的