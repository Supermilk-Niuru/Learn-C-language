#include<stdio.h>
int main(int argc,char **argv)//二重指针类型 argv：指针数组的数组名
{
    //实参提供：函数调用者，函数返回值，全局变量。
    int i;
    printf("参数个数为:%d\n",argc);
    for(i=0;i<argc;i++)
    {
        printf("第%d个参数为:%s\n",i+1,argv[i]);
    }
}