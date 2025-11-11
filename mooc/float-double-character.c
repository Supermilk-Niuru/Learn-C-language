/*Out put character*/

#include<stdio.h>
int main()
{
    double a;
    char b;
    char c = '1';
    char m = 49;
    a = 1.346F;
    
    scanf("%c",&b);
    
    printf("a=%f\n",a);
    
    printf("b=%c\n",b);
    printf("b=%d\n",b);
    
    printf("c=%c\n",c);
    printf("c=%d\n",c); 

    printf("m=%c\n",m);       //%c是当作字符输出
    printf("m=%d\n",m);       //%d是当作整数输出

    return 0;
}