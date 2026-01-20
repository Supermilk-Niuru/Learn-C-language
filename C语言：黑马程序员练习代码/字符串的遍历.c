#include<stdio.h>
int main()
{
    char a[100];
    scanf("%s",a);
    char *p = a;
    while(1)
    {
        char c = *p;
        if(c == '\0')
        {
            break;
        }
        else
        {
            printf("%c\n",c);
        }
        p++;
    }
}