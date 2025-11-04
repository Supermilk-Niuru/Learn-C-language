#include<stdio.h>
void biteswap1(int a)
{
    int b;
    b = a>>16;
    if((b & 1) ==1)
    {
        printf("高十六位为奇数\n");
    }
    else 
        printf("高十六位为偶数\n");
}

void biteswap2(int a)
{
    int c;
    c = a & 0x0000ffff;
    if((c & 1) ==1)
    {
        printf("低十六位为奇数\n");
    }
    else 
        printf("低十六位为偶数\n");

}
int main()
{
    int i;
    printf("input a HEX number:");
    scanf("%x",&i);
    biteswap1(i);
    biteswap2(i);
    return 0;
}