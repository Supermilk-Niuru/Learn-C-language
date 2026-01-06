#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#define num 70 
void judge(char str1[], char str2[]) 
{
    int i = 0; 
    int j = 0; 
    int len = strlen(str1); 
    int m = 0; 
    while (i < len)
    {
        char c = str1[i];
        if (isdigit(c)) 
        {
            str2[j] = c;
            j++;
            m = 0;
        } 
        else 
        {
            if (m==0) 
            {
                str2[j] = '*';
                j++;
                m = 1;
            }
        }
        i++;
    }
}
int main() 
{
    char str1[num];
    char str2[num]; 
    scanf("%s", str1);
    judge(str1,str2);
    printf("%d\n", str2);
    return 0;
}