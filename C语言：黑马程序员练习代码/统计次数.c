#include<stdio.h>
#include<string.h>
void count(char c[100]);
int main()
{
    char c[100];
    fgets(c,sizeof(c),stdin);
    c[strcspn(c,"\n")]='\0';
    count(c);
    return 0;
}
void count(char c[100])
{
    int bigcount=0,smallcount=0,numbercount=0;
    int i;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]>='A'&&c[i]<='Z')
        {
            bigcount++;
        }
        else if (c[i]>='a'&&c[i]<='z')
        {
            smallcount++;
        }
        else if (c[i]>='0'&&c[i]<='9')
        {
            numbercount++;
        }
    }
    printf("大写%d,小写%d,数字%d\n",bigcount,smallcount,numbercount);
}