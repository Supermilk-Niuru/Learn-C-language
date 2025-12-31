#include<stdio.h>
#define NUM 10
 
void printArray(int a[],int n)//形参
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%-2d",a[i]);
    }//既作为下标，也作为循环号
    printf("\n");
}//给定一个数组a，其长度为n，输出长度的内容
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    printArray(a,NUM);//调用定义函数，提供实参（具体的值）给定义函数
    return 0;
}
