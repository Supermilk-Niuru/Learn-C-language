#include<stdio.h>
#include<stdbool.h>
void change(int n);
int main()
{
    int n;
    scanf("%d",&n);
    change(n);
    return 0;
}
void change(int n)
{
    
    int a[n];
    int i;
    for(i=0;i<=(n-1);i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++)//总共要循环n-1次
    {
        bool judge = true;
        int j;
        for(j=0;j<(n-1-i);j++)//总共要循环n-1次。为什么可以修改成n-1-i，因为前i个元素已经排好了，只用排剩下的元素就可以了。
        {
            if(a[j]>a[j+1])
            {
                int t;
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                judge = false;
            }
        }
        if(judge)
        {
            break;
        }
    }
    for(i=0;i<=(n-1);i++){
        printf("%d\n",a[i]);
    }
}
