#include<stdio.h>
#include<string.h>
#include<ctype.h>
//#include<stdlib.h>
#define N 30
int tag = 0; //进位标志
void beep();//输入错误，会蜂鸣一下
void GetNumberStr(char *s);//输入操作数作为实参，然后调用AddNumber
void AddNumberStr(char *a, char *b, char *c);//字符串相加不方便，调用AddChar字符相加
char AddChar(char ch1,char ch2);//字符相加更方便
void Trim(char *c);
int main()
{
    char a[N+1] = {0};
    char b[N+1] = {0};
    char c[N+2] = {0};
    printf("a=");
    while(strlen(a)==0)
    {
        GetNumberStr(a);
    }
    printf("b=");
    while(strlen(b)==0)
    {
        GetNumberStr(b);
    }
    AddNumberStr(a,b,c);
    printf("a + b = %s\n",c);
    return 0;
}
void beep()
{
    printf("\07");
}

void GetNumberStr(char *s)
{
    int i=0;
    char ch;
    while(1)
    {
        ch = getchar();
        if(ch=='\r'|| ch=='\n')
        {
            break;
        }
        if(ch=='\b')
        {
            if(i>0)
            {
                printf("%c %c",ch,ch);//退一格。输出空格，再退一格，
                i--;
            }
        }
        
        if(!isdigit(ch))
        {
            beep();
            continue;
        }
        if(i<N)
        {
            //printf("%c",ch);
            s[i++] = ch;
        }
        else
        {
            beep();
        }
    }
}

void AddNumberStr(char *a, char *b, char *c)//相加之后存储到c
{
    int i,j,k;
    memset(c,' ',N+2);//初始化为空格
    i = strlen(a)-1;//相加是一个从右向左的过程
    j = strlen(b)-1;
    k = N;
    while((i>=0) && (j>=0))
    {
        *(c+k--) = AddChar(*(a+i--),*(b+j--));
    }
    while(i>=0)
    {
        *(c+k--) = AddChar(*(a+i--),'0');
    }
    while(j>=0)
    {
        *(c+k--) = AddChar('0',*(b+j--));
    }
    if(tag==1)
    {
        *(c+k--) = '1';   
    }
    *(c+N+1) = '\0';
    Trim(c);
}

char AddChar(char ch1,char ch2)
{
    char ch;
    int offset = '1'-1;
    ch = (ch1-offset + ch2 - offset) + tag;
    if(ch>=10)
    {
        tag = 1;
        return (ch - 10 + offset);
    }   
    else
    {
        tag = 0;
        return(ch+offset);
    }
}

void Trim(char *c)//整体左移，找到第一个非空格下标
{
    int i;
    for(i=0;*(c+i)==' ';i++);
    strcpy(c,c+i);
}

