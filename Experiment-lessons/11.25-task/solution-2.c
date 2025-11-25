//对主串遍历
#include<stdio.h>
void strloc(char S[],char T[])
{
    int i,j;
    i=j=0;
    while(S[i+j]!='\0')
    {
        if(S[i+j]==T[j])//i+j指向主串S，j指向模式串T
        {
            j++;
            if(T[j]=='\0')
            {
                printf("%d ",i);
            }
        }
        else
        {
            i++;
            j=0;
        }
    }
    printf("\n");
}
int main()
{
    
    char str1[] = "abdabcaabcabbabccbab";
    char str2[] = "ab";
    strloc(str1,str2);
    return 1;
}