#include<stdio.h>

int main()
{
    /*
    char str[5][100] = {"zhang","wang","liu","li","chen"};
    int i;
    for(i = 0;i<5;i++)
    {
        char *c = str[i];
        printf("%s\n",c);
    }
    */
   char *a[5] = {"zhang","wang","liu","li","chen"};
   int i;
   
   for(i=0;i<5;i++)
   {
        char *arr = a[i];
        printf("%s\n",arr);
   }
    return 0;
}