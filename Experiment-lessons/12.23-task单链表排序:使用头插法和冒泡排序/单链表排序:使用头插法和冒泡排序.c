//头插法,尾插法 
//调试的时候最好先规定好。
#include<stdio.h>
#include<string.h>
//#include<malloc.h>
#include<stdlib.h>
#define NUM 10
int id[] = {4,2,3,1,8,9,0,5,6,7};//学号
char *name[]= {"zhao","qian","sun","li","zhou","wu","zheng","wang","feng","chen"}; //字符指针类型的数组
typedef struct student_info //定义学生类型 单链表节点类型，必须是有名的结构体
{
    int id;
    char name[20];//数据域
    struct student_info *next;//指针域；
}STUDENT,*pSTUDENT;
//typedef struct student_info STUDENT,*pSTUDENT; //简化类型定义,
//pSTUDENT 等价于 STUDENT*
pSTUDENT createStuList()
{
    //单链表中都是以对指针操作
    int i;
    pSTUDENT head,pnew;
    head = (pSTUDENT)malloc(sizeof(STUDENT));
    head->next = NULL;
    for(i=0;i<NUM;i++)
    {
        pnew = (pSTUDENT)malloc(sizeof(STUDENT));
        pnew->id = id[i];
        strcpy(pnew->name,name[i]);
        pnew->next = head->next;
        head->next = pnew;
    }
    return head;
}

void showStudent(pSTUDENT head)
{
    pSTUDENT p;
    for(p=head->next;p!=NULL;p=p->next)
    {
        printf("(%d)%s ",p->id,p->name);
    }
    printf("\n");
}

void freeStudent(pSTUDENT head)//销毁链表
{
    pSTUDENT p = head,q;
    while(p!=NULL)
    {
        q = p;
        p = p->next;
        free(q);
    }
}

//另外一种处理（难度较大）修改指针的指向进行交换。本处是对单链表使用冒泡排序算法进行排序。
void BubbleSort(pSTUDENT head)//自己试试使用选择排序怎么做，选择排序更简单，因为其无需区间在后面。
{
    pSTUDENT p,q,r=NULL;//因为初始的时候都是无序区间，所以我们对r初始化为NULL
    pSTUDENT lastExchangeNode;//最后一次交换的节点
    int flag;//判断是否发生交换
    STUDENT tmp;
    for(p=head->next;p->next!=NULL;p=p->next)//当p走到最后一个节点就停下来
    {
        flag = 0;
        for(q=head->next;q->next!=r;q=q->next)//冒泡排序，无需区间在前面。如何取到无需区间的终点。
        {
            if(q->id > q->next->id)
            {
                strcpy(tmp.name,q->next->name);
                tmp.id = q->next->id;
                strcpy(q->next->name,q->name);
                q->next->id = q->id;
                strcpy(q->name,tmp.name);
                q->id = tmp.id;
                lastExchangeNode = q->next;//记录最后一次交换的节点的位置，无序区间的后一个节点的地址，也就是有序区间的第一个节点的地址。
                flag = 1;
            }
        }
        r = lastExchangeNode;
        if(!flag)
        {
            break;
        }
    }
}
int main()
{
    pSTUDENT stu;
    stu = createStuList();
    printf("排序前:\n");
    showStudent(stu);
    printf("排序后:\n");
    BubbleSort(stu);
    showStudent(stu);
    freeStudent(stu);
}

//创建，显示，释放单链表要学会写。