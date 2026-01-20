#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    //int *p = malloc(sizeof(int)*10);
    int *p = calloc(10,sizeof(int));
    
    int i;
    for(i=0;i<10;i++)
    {
        *(p+i) = (i+1)*10;
        //printf("%d ",p[i]);
    }
    int *pp = realloc(p,sizeof(int)*20);
    for(i=0;i<20;i++)
    {
        //*(p+i) = (i+1)*10;
        printf("%d ",pp[i]);
    }
    
    printf("%d ",pp[0]);
    free(pp);
    return 0;
}