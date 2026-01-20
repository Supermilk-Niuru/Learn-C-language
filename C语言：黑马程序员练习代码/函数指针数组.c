#include<stdio.h>
int jia(int num1,int num2);
int jian(int num1,int num2);
int cheng(int num1,int num2);
int chu(int num1,int num2);
int main()
{
    int num1,num2;
    int (*p[4])(int num1,int num2)={jia,jian,cheng,chu};//定义函数指针数组
    scanf("%d %d",&num1,&num2);
    int judge;
    scanf("%d",&judge);
    int consequence = (p[judge-1])(num1,num2);//索引法：注意是judge-1，数组从0开始
    printf("%d\n",consequence);
    return 0;
}
int jia(int num1,int num2)
{
    return num1+num2;
}
int jian(int num1,int num2)
{
    return num1-num2;
}
int cheng(int num1,int num2)
{
    return num1*num2;
}
int chu(int num1,int num2)
{
    return num1/num2;
}