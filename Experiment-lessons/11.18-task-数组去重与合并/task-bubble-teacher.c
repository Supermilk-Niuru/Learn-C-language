#include<stdio.h>
#define NUM 10
void bubbleSort(int a[])      //形式参数a
{
    int i,j;
    int tmp;
    int flag;               //用于判断一轮循环有没有交换
    for(j=0;j<NUM-i;j++)   //二重循环 外层n-1次，内层n此
    {
        flag  = 1;
        for(j=0;j<NUM;j++)
        {
            if(a[j]<a[j+1])
            {
                tmp = a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
        if(flag) break;
    }
}

