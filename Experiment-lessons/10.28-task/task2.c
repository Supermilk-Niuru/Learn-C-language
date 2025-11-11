#include<stdio.h>
#define N 7 //模拟7位补码环境
unsigned toNcomplement(int num)
{
  unsigned modulo = 1<<N,comp; //定义摩 通过移位操作，把1向左移动N位
  if(num>=0)
    comp = num%(modulo-1); //取摩运算;保留num的低n位
  else
    comp = modulo- -num%modulo; //负数取绝对值的补(先缩小到既定的取值范围内) 或者 把num的绝对值按位取反，末位加1 --> comp = ~-num+1(有可能超出取值范围)，需要继续取摩运算 所以优化为（comp = ~-num+1&(modulo-1)）
  return comp;
}
int main()
{
    unsigned u1,u2;
    u1 = toNcomplement(64);
    u2 = toNcomplement(-123);
    printf("u1=%u,u2=%u\n",u1,u2);
    return 0;
}