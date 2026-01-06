//假设学生信息包括：学号(整型)、姓名（字符串）、成绩（整型）及所用时间（整型）。要求构造一单链表存放学生信息，然后对其以冒泡排序法进行排序；
//排序的规则是：按成绩从高到低降序，成绩相同时所用时间少者在先，多者在后。要求输出排序后的结果。

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NUM 5
long long int id[] = {1,2,3,4,5};
char *name[] = {"zhao","qian","sun","li","zhou"};
int score[] = {91,92,93,93,95};
int time[] = {10,20,30,40,40};
typedef struct student_information
{
    long long int id;
    char name[100];
    int score;
    int time;
    struct student_information *next;
}s,*ps;
ps createstudentlist()
{
    int i;
    ps head,pnew;
    head = (ps)malloc(sizeof(s));
    head->next = NULL;
    for(i=0;i<NUM;i++)
    {
        pnew = (ps)malloc(sizeof(s));
        pnew->score = score[i];
        pnew->id = id[i];
        pnew->time = time[i];
        strcpy(pnew->name,name[i]);
        pnew->next = head->next;
        head->next = pnew;
    }
    return head;
}
void showStudent(ps head)
{
    ps p;
    for(p=head->next;p!=NULL;p=p->next)
    {
        printf("(%lld)%s %d %d ",p->id,p->name,p->score,p->time);
    }
    printf("\n");
}
void freeStudent(ps head)
{
    ps p = head,q;
    while(p!=NULL)
    {
        q = p;
        p = p->next;
        free(q);
    }
}
void BubbleSort(ps head)
{
    ps p,q,r=NULL;
    ps lastExchangeNode;
    int flag;
    s tmp;
    for(p=head->next;p->next!=NULL;p=p->next)
    {
        flag = 0;
        for(q=head->next;q->next!=r;q=q->next)
        {
            if(q->score < q->next->score)
            {
                strcpy(tmp.name,q->next->name);
                tmp.score = q->next->score;
                tmp.id = q->next->id;
                tmp.time = q->next->time;
                
                strcpy(q->next->name,q->name);
                q->next->score = q->score;
                q->next->id = q->id;
                q->next->time = q->time;
                
                strcpy(q->name,tmp.name);
                q->score = tmp.score;
                q->id = tmp.id;
                q->time = tmp.time;
                
                lastExchangeNode = q->next;
                flag = 1;
            }
            else if(q->score == q->next->score||q->time < q->next->time)
            {
                strcpy(tmp.name,q->next->name);
                tmp.score = q->next->score;
                tmp.id = q->next->id;
                tmp.time = q->next->time;
                
                strcpy(q->next->name,q->name);
                q->next->score = q->score;
                q->next->id = q->id;
                q->next->time = q->time;
                
                strcpy(q->name,tmp.name);
                q->score = tmp.score;
                q->id = tmp.id;
                q->time = tmp.time;
                
                lastExchangeNode = q->next;
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
    ps stu;
    stu = createstudentlist();
    printf("排序前:\n");
    showStudent(stu);
    printf("排序后:\n");
    BubbleSort(stu);
    showStudent(stu);
    freeStudent(stu);
}
