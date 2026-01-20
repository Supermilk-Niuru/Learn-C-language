#include<stdio.h>
struct student
{
    char name[100];
    int age;
    char gender;
    double height;
};
int main()
{
    struct student person1 = {"zhangsan",4,'M',1.78};
    struct student person2 = {"lisi",5,'M',1.79};
    struct student person3 = {"wangwu",6,'F',1.80};
    
    struct student *p[3] = {&person1,&person2,&person3};
    int i;
    for(i=0;i<3;i++)
    {
        struct student *s = p[i];
        printf("%s,%d,%c,%lf\n",s->name,s->age, s->gender, s->height);
    }
    
    /*
   struct student a[3] = {person1,person2,person3};
   int i;
   for(i=0;i<3;i++)
   {
        printf("%s,%d,%c,%lf\n",a[i].name,a[i].age,a[i].gender,a[i].height);
   }
    */
}
