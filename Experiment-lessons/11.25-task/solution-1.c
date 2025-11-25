//对主串遍历
#include<stdio.h>
void strloc(char S[],char T[])//S是主串.本质上就是滑动的过程
{
    int i,j,k;//i指向滑动位置,k指向主串S，j指向模式串T。
    for(i=0;S[i]!='\0';i++)//用i去枚举每一个滑动的位置
    {
        j=0;//每一次滑动过程都要进行比较，主串从i开始比较，模式串从0开始比较
        k=i;//不能修改i，因为修改后步长会改变
        while(T[j]!='\0') //不知道循环的次数。
        {
            if(S[k]==T[j])
            {
                k++;
                j++;
            }
            else 
            {
                break;//退出内层while循环。
            }
        }
        if(T[j]=='\0')//匹配成功的条件
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}
int main()
{
    
    char str1[] = "abdabcaabcabbabccbab";//直接用字符串常量去定义字符串数组
    char str2[] = "ab";
    strloc(str1,str2);
    return 1;
}