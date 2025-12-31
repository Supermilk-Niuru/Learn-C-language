#include<stdio.h>
int main ()
{
    unsigned short a = -2;//0xfffffffe
    unsigned short b = 1;//0x000000001
    
    if (a+b>0) //if后面不要有分号
    printf(">0\n");
    
    else
    printf("<0\n");
    
}
