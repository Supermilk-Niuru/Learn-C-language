#include<stdio.h>
#include<string.h>
struct hehe
{
    char name[100];
    char gender;
    int age;
    double height;
};
int main()
{
    struct hehe l1;
    l1.age = 3;
    strcpy(l1.name,"zhangsan");
    printf("%s %d\n",l1.name,l1.age);
}