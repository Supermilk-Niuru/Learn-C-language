#include<stdio.h>
#include<string.h>
#include<ctype.h>//判断字符是否为英文字符
#include<stdlib.h>
#define N 10000/ //大一点会更好
void GetMem(char ***p,int row,int col);//创建动态二维数组
void wordSep(char *text,char **word,int num);//分离单词
void Saveword(char *wordstr,char **word,int num);//统计和保存单词
void showword(char **word,int num);//输出单词统计结果

int main(int argc,char **argv)
{
    char text[N+1];
    int row,col;
    int i;
    char **p;
    if(argc!=3 || (row = atoi(argv[1]))==0 || (col=atoi(argv[2]))==0) //可行性判定。
    {
        printf("invalid parameters\n");
        return 0;
    }
    GetMem(&p,row,col);
    printf("input text:");
    gets(text);//输入句子 //fgets(text, sizeof(text), stdin);
    wordSep(text,p,row);
    showword(p,row);
    for(i=0;i<row;i++)
    {
        free(p[i]);//动态二维数组 释放每一行，在释放指针数组p
    }
    free(p);
    return 0;
}

void GetMem(char ***p,int row,int col)
{
    int i;
    *p = (char **)malloc(row*sizeof(char*));
    for(i=0;i<row;i++)
    {
        (*p)[i] = (char*)malloc(col*sizeof(char));
        if((*p)[i]!=NULL)
        {
            memset((*p)[i],0,col*sizeof(char));
        }
    }
}

void wordSep(char *text,char **word,int num)
{
    int i=0, j;
    char wordstr[50];
    while(text[i]!='\0')
    {
        if(isalpha(text[i]))
        {
            j = 0;
            while(isalpha(text[i]))
            {
                wordstr[j++] = text[i++];
            }
            wordstr[j] = '\0';//暂存分离出来的单词。
            Saveword(wordstr,word,num);
        }
        else
        {
            i++;
        }
    }
}

void Saveword(char *wordstr,char **word,int num)
{
    int i;
    for(i=0;(i<num)&&(word[i][0]>=1);i++)//遍历所有已经保存的单词（计数值大于或等于1），(i<num)&&(word[i][0]>=1)能否换位置，不能换位置，短路机制，可以防止数组越界
    {
        if(strcmp(wordstr,word[i]+1)==0)//如果单词已经出现，就增加计数值
        {
            word[i][0]++;
            return;
        }
    }
    if(i<num)
    {
        strcpy(word[i]+1,wordstr);//拷贝新的单词
        word[i][0]++;//或者word[i][0] = 1；
    }
}

void showword(char **word,int num)
{
    int i;
    printf("the seperated words are:\n");
    for(i=0;(i<num)&&(word[i][0])>0;i++)
    {
        printf("%s(%d) ",word[i]+1,word[i][0]);
    }
    printf("\n");
}