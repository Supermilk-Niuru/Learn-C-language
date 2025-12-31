#include<stdio.h>
#define N 7 
unsigned toNcomplement(int num)
{
  unsigned modulo = 1<<N,comp; 
  if(num>=0)
    comp = num%(modulo-1); 
  else
    comp = modulo- -num%modulo; 
  return comp;
}

signed add(int a ,int b)
{
    unsigned modulo = 1<<N , sum;
    sum = toNcomplement(a+b);//if(sum>>N-1==0)
    if(sum>>N-1==0) //if(sum<=modulo/2-1) 还可以用逻辑表达式-->  if(!(sum>>N-1)) 必须加括号，逻辑非是单目运算符
      return (signed)sum;
    else
      return -(signed)(~sum+1)&(modulo-1); //return -(signed)(modulo-sum);
}

int main()
{
    unsigned u1,u2;
    int sum1,sum2;
    u1 = toNcomplement(64);
    u2 = toNcomplement(-123);
    sum1 = add(12,52);
    sum2 = add(64,-170);
    printf("u1=%u,u2=%u\n",u1,u2);
    return 0;
}
//本题要对位运算有充分了解，补码的基本原理，类型转换