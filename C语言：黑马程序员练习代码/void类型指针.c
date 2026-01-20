#include<stdio.h>
void swap(void *p1,void *p2,int len);
int main()
{
    int a = 10;
    int b = 20;
    int *m = &a;
    int *n = &b;
    int c = sizeof(int);
    swap(m,n,c);
    printf("a=%d,b=%d\n",a,b);
}
void swap(void *p1,void *p2,int len)
{
    char *p11 = p1;
    char *p22 = p2;
    int i;
    for(i=0;i<len;i++)
    {
        char tmp = *p11;
        *p11 = *p22;
        *p22 = tmp;
        p11++;
        p22++;
    }
}