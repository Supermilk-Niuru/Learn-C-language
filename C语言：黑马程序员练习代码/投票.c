//编写一个程序，统计A,B,C,D四个景点的投票数，决定最后去的景点，80个人投票。若票数相同，优先级A>B>C>D.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
定义一个结构体，包含景点名和票数
生成随机数
统计票数
比较票数，得出最高票数的景点
相同票数的处理
输出结果
*/
struct Spots
{
    char name;
    int vote;
};

void count(struct Spots m1[4]);

int main()
{
    struct Spots m1[4]= {{'A',0},{'B',0},{'C',0},{'D',0}};
    count(m1);
    return 0;
}
void count(struct Spots m1[4])
{
    int i,k;
    srand(time(NULL)); 
    //统计票数
    for(i=0;i<80;i++)
    {
        int p = rand() % 4; 
        int choose = p%4;
        m1[choose].vote++;
    }
    //比较票数,找到最大票数
    int max = m1[0].vote;
    k = 0;
    for(i=1;i<=3;i++)
    {
        if(max < m1[i].vote)
        {
            max = m1[i].vote;
            k = i;
        }
        //相同票数的处理
        else if(max == m1[i].vote)
        {
            continue;
        }
    }
    //输出结果
    printf("票数最高的景点是%c,它的票数是%d\n",m1[k].name,m1[k].vote);
    for(i=0;i<=3;i++)
    {
        printf("景点%c,票数%d\n",m1[i].name,m1[i].vote);
    }
}