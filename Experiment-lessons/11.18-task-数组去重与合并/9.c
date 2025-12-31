#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int t,num2,num1;
	int i,j;
	int flag,count=0;
	 
	printf("请输入两个非零自然数：");
    scanf("%d %d",&num1,&num2);
    
    if (num1<=0 || num2<=0)
       exit(-1);
    
    if(num1>num2)
    {
	  t=num2;
      num2=num1;
      num1=t;
    }
    
	printf("num1到num2之间的素数有:\n"); 
    
	for(i=num1;i<=num2;i++)
    {  
	   flag=1;
       if(i==1)
         flag=0;
       else 
	   {for(j=2;j<=(int)sqrt(i);j++)
       {  
	     if(i%j==0)
          {flag=0;break;}
       } 
       }
        if (flag==1)
	    {
	        printf("%-6d ",i) ;
            count++;
            if(count%9==0)
            printf("\n");
        }
    }
    printf("共找到%d个素数\n",count);
    
    return 0;
}