#include<stdio.h>
#include<math.h>        //自己设计函数，return只能返回1个数，接受一个三位数，然后显示，不需要输出
void numsplit(int i)    //void表示返回值为空（给使用者反馈），函数名字为numsplit，函数参数（函数使用者提供的信息之后才能解决问题）这就是函数声明，让编译器知道如何调用
{
    int a,b,c;
    a = i/100;                                               //求百位数
    b = (i-100*a)/10;                                        //求十位数   or b=i%100/10（取余数）
    c = i-100*a-10*b;                                        //求个位数   or c=i%100%10（取余数）
    printf("the input number is %d-%d-%d\n",a,b,c);          //分离数字除了做减法，还可以取余数。
}                                                            //开始实现函数,考虑哪些中间变量需要定义，去接收。然后一步步实现。此时不能运行，还没有在主函数调用。

int main()
{
    int i;
    printf("task 1\n");
    printf("please input three digits number:");
    scanf("%d",&i);  //输入一个数存进去
    numsplit(i);  //调用函数
}