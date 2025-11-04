#include<stdio.h>
void bitswap(int a)
{
    int b;
    b = (a<<16) | (a>>16 & 0x0000ffff);
    printf("%#x\n",b);
}
int main()
{
    int i;
    printf("input a HEX number:");
    scanf("%x",&i);
    bitswap(i);
    return 0;
}
