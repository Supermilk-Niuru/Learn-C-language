#include<stdio.h>
void task2()                    //本题还可以用一重循环，二重循环做
{
    int i,j,k;
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            for(k=0;k<100;k++)
            {
                if(k%3==0 && i+j+k==100 && 5*i + 3*j + k/3==100)
                {
                    printf("母鸡：%d 公鸡：%d 小鸡：%d\n",i,j,k);
                    break;      //退出最内层循环，i，j确定，k的值随之确定。
                }
            }
        }
    }
}
int main()
{
    task2();
    return 0;
}