#include<stdio.h>
int max(int a,int b);
int main()
{
    int x,y,z;   //int 后面加字母要加空格。
    scanf("%d%d",&x,&y);
    z=max(x,y);
    printf("max=%d\n",z);
    return 0;
}
int max(int a,int b)
{
    int c;

    if(a>b)
     c=a;
    else
     c=b;
    return(c);
}