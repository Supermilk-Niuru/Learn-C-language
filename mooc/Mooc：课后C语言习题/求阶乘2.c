/*#include<stdio.h>
int main()
{
    int n;
    int i;
    int fact=1;
    scanf("%d",&n);
    while(i<=n)
    {
        fact*=i;
        i++;
        
    }
    printf("fact=%d\n",fact);
    return 0;
}*/

#include<stdio.h>
int main()
{
    //int i;
    int n;
    scanf("%d",&n);
    int fact=1;//千万不要有这种错误将n赋值给fact，却用户还没有输入n
    
    for(;n>1;n--)
    {
        fact*=n;
        printf("%d\n",fact);
    }
    //scanf("%d",&n);
    printf("fact=%d\n",fact);
    printf("%d\n",n);
    return 0;
}