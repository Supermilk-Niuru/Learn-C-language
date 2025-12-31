#include<stdio.h>
#include<string.h>
void strloc(char S[],char T[])
{
    int i=0;
    int lens = strlen(S);
    int lent = strlen(T);
    for(i=0;i<=lens-lent;i++)
    {
        if(strncmp(&S[i],T,lent)==0)
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