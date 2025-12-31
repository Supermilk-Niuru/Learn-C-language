#include<stdio.h>
int countOne(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int m = countOne(n);
    printf("你输入了%d\n转换成二进制后有%d个1\n",n,m);
    return 0;
}
int countOne(int n)
{
	int count = 0;
	while(n!=0)
	{
		count += n&1;
		n = (unsigned int)n>>1;
	}
	return count;
}