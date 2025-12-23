#include <stdio.h>
#include <string.h>
#define num 70
int judge(char c, char s[]) 
{
    int k;
    for (k = 0; s[k] != '\0'; k++) 
    {
        if (c == s[k]) 
        {
            
            return 1; 
        }
    }
    return 0;
}
void strloc(char str[], char s[], char change[]) 
{
    int i; 
    int j = 0; 
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (judge(str[i], s) == 0) 
        {
            change[j] = str[i];
            j++;
        }
    }
    change[j] = '\0';
}
int main() 
{
    char str[num];
    char s[num];
    char change[num]; 
    scanf("%s", str);
    scanf("%s", s);
    strloc(str, s, change);
    printf("%s\n", change);
    return 0;
}