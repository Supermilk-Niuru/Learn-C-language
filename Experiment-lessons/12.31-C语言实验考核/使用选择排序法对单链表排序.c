#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NUM 4

char *name[] = {"zhao","qian","sun","li"};
int id[] = {1,4,2,3};

//定义结构体
typedef struct student_info{
	int id;
	char name[10];
	struct student_info *next;
}STUDENT,*pSTUDENT;

//函数的声明
STUDENT* createStuList();
void showStudent(pSTUDENT head);
void freeStudent(pSTUDENT head);
void SelSort(pSTUDENT head);

//创建单链表
STUDENT* createStuList()
{
	int i;
	pSTUDENT head,pnew;
	head = (pSTUDENT)malloc(sizeof(STUDENT));
	head->next = NULL;
	for(i=0;i<NUM;i++){
		pnew = (pSTUDENT)malloc(sizeof(STUDENT));
		pnew->id = id[i];
		strcpy(pnew->name,name[i]);
		pnew->next = head->next;
		head->next = pnew;
	}
	return head;
}

//显示单链表
void showStudent(pSTUDENT head)
{
	pSTUDENT p;
	for(p=head->next;p!=NULL;p=p->next)
		printf("(%d)%s ",p->id,p->name);
	printf("\n");
}

//释放单链表
void freeStudent(pSTUDENT head)
{
	pSTUDENT p=head,q;
	while(p!=NULL)
	{
		q = p;
		p = p->next;
		free(q);
	}
}
//使用选择排序为单链表排序
void SelSort(pSTUDENT head)
{
	pSTUDENT p,q,r;
	STUDENT tmp;
	for(p=head->next;p->next!=NULL;p=p->next)
	{
		r = p;
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(q->id<r->id)
				r = q;
		}
		if(r!=p)
		{
			strcpy(tmp.name,p->name);
			tmp.id = p->id;
				
			strcpy(p->name,r->name);
			p->id = r->id;
				
			strcpy(r->name,tmp.name);
			r->id = tmp.id;
		}
	}
}

int main()
{
    pSTUDENT stu;
    stu = createStuList();
	showStudent(stu);
	SelSort(stu);
	showStudent(stu);
}