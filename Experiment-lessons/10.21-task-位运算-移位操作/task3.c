#include<stdio.h>
int max(int a,int b)
{
    int c;
    if(a>b)
    c = a;
    else
    c = b;
    return c;
}

int main(int argc, char** argv){
    int i,j,k;
    printf("input two integers:");
    scanf("%d%d",&i,&j);
    k = max(i,j);
    printf("the max num is %d\n",k);
}