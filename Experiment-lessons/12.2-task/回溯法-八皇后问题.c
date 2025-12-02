#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define NUM 8
int board[NUM]={0};//全局变量，因为后面都要用。先初始化为0
int check(int i,int j);
void printResult();
void Try(int i);

void Try(int i)
{
    int j;
    for(j=0;j<NUM;j++)
    {
        if(check(i,j)==1)
        {
            board[i] = j;//表示棋盘
            if(i==NUM - 1)
            printResult();
            else
            {
                Try(i+1);
            }
        }
    }
}
int check(int i,int j)//判断能否放置皇后
{
    int k;
    for(k=0;k<=i-1;k++)
    {
        if(board[k]==j || abs(board[k]-j)==abs(k-i))//列冲突或者对角线冲突
        return 0;
    }
    return 1;
}
void printResult()
{
    int i;
    static int snum = 1;//静态变量，如果不使用的话，下一次用的时候会重新归零。
    //避免一次性输出太多
    if(snum%5==0)
    {
        printf("按任意键继续\n");
        getchar();
    }
    printf("===第%d个解===\n",snum++);
    for(i=0;i<NUM;i++)
    {
        printf("第%d行的皇后放置在第%d列\n",i+1,board[i]+1);
    }
    printf("\n");
}
int main()
{
    Try(0);
    return 1;
}