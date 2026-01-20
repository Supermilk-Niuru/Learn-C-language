#include<stdio.h>
struct message
{
    char phone[100];
    char mail[100];
};
struct student
{
    char name[100];
    int age;
    struct message m1;
};
int main()
{
    struct student person1 = {"zhangsan",80,{"12345678","567890@qq.com"}};
    printf("%s\n",person1.m1.mail);
}