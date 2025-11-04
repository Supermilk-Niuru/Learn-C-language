#include<stdio.h>//条件表达式 或者 if else解答；每一个部分代表一种方法。

void task1(char ch)
{
    char prev,post; // 定义两个变量，保存前驱，后继  //首先判断ch的合法性
    if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
    {
        if(ch=='A')
        {
            prev = 'Z';
            post = 'ch+1';
        }
        else if(ch='a')
        {
            prev = 'z';
            post = 'ch+1';
        }
        else if(ch='Z')
        {
            prev = ch-1;
            post = 'A';
        }
        else if(ch='z')
        {
            prev = 'ch-1';
            post = 'a';
        }
        else 
        {
            prev = ch - 1;
            post = ch + 1;
        }
        printf("%c---%c---%c\n",prev,ch,post);

    }
    else
        printf("invalid imput\n");
 }

void task1_1(char ch)
{
    char prev,post; 
    int tag = 1;
    if((ch>='a'&&ch<='z') )
    {
        post = ch =='z'?'a':ch + 1;
       
        prev = ch =='a'?'z':ch -1;
    }
    else if ((ch>='A'&&ch<='Z'))
    {
        post = ch=='Z'?'A':ch + 1;
        prev = ch=='A'?'Z':ch - 1;
    }
    else
        tag = 0;
    if(tag)
        printf("%c---%c---%c\n",prev,ch,post);
    else 
        printf("invalid input\n");
}

void task1_2(char ch)
{
    char prev,post; 
    int tag = 1;
    if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
    {
    switch(ch)
        {
            case 'a':prev = 'z';post = ch + 1;break;
            case 'A':prev = 'Z';post = ch + 1;break;
            case 'z':prev = ch-1;post = 'a';break;
            case 'Z':prev = ch-1;post = 'A';break;
        }
    }
    else
        tag = 0;
    if(tag)
        printf("%c---%c---%c\n",prev,ch,post);
    else 
        printf("invalid input\n");
}
    
int main()

{
    char c;
    printf("imput a character\n");
    c = getchar();
    task1(c);//task1_1(c);task1_2(c) 函数的调用
}
