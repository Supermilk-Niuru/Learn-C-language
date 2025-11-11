#include<stdio.h>
#include<math.h>        
void equationSolve(int a,int b,int c)   
{
    double f1,f2;//定义两个变量，函数解的类型;有时太复杂了，可以定义一个中间变量
    int delta;//考虑变量，以及变量的数据类型 
    delta = b*b-4*a*c;
    if(delta>=0)
    {
        f1 = (-b+sqrt(delta))/(2*a);//注意运算的优先级
        f2 = (-b-sqrt(delta))/(2*a);
        printf("f1=%lf,f2=%lf\n",f1,f2);
    }
    else
    printf("no solution\n");
}                                                           

int main()
{
    int i;
    int a,b,c;
    printf("task2\n");
    printf("please input for a fomular");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);//用几个scanf就是输入几次
    equationSolve(a,b,c);
}