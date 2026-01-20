#include<stdio.h>
#include<string.h>
int main()
{
    char *str1 = "abc";
    char str2[100]="abc";
    char str3[4]={'a','b','d','\0',};
    printf("%s\n",str2);
    strcat(str2,str3);
    printf("%s\n",str2);
    printf("%d\n",strcmp(str2,str3));
}