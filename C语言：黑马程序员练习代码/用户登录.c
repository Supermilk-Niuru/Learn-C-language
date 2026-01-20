#include<stdio.h>
#include<string.h>
int main()
{
    char username[100];
    char password[100];
    char *rightpassword = "12345678";
    char *rightusername = "zhang san"; 
    int i = 0;
    for(i=1;i<=3;i++)
    {
        printf("请输入您的姓名:\n");
        scanf("%s",username);
        printf("请输入您的密码:\n");
        scanf("%s",password);
        if(!strcmp(rightusername,username)&&!strcmp(rightpassword,password))
        {
            printf("登录成功\n");
            break;
        }
        else
        {
            printf("登录失败,还剩%d次机会\n",3-i);
            if(i==3)
            {
                printf("用户已经被锁定\n");
            }
            else
            {
                continue;
            }
        }
    }
}