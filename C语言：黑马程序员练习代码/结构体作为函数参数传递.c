//姓名，年龄，身高，定义一个函数，修改其中的数据。
#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[100];
    int age;
    double height;
} S;
void change(S *stu);
int main()
{
    S stu;
    
    S *p = &stu;
    //开始调用函数
    change(p);
    //开始输出
    printf("他是%s,年龄是%d,身高是：%lf\n",stu.name,stu.age,stu.height);
}
void change(S *stu)
{
    printf("请输入你想要对谁进行修改:\n");
    scanf("%s",stu->name);
    printf("他的年龄是：\n");
    scanf("%d",&(stu->age));
    printf("他的身高是：\n");
    scanf("%lf",&(stu->height));
}