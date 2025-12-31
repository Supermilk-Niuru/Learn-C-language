#include<stdio.h>
#define NUM 10
void bubbleSort(int a[]) //冒泡排序写法     
{
    int i,j;
    int tmp;
    int flag;               
    for(i=0;i<NUM-1;i++)   
    {
        flag = 1;
        for(j=0;j<NUM-1;j++)
        {
            if(a[j]<a[j+1])
            {
                tmp = a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                flag=0;
            }
        }
        if(flag==1) 
            break;
    }
}

void selectSort(int a[]) //选择排序写法
{
    int i,j,k;
    int tmp;
    for(i=0;i<NUM-1;i++)
    {
        k=i;
        for(j=i+1;j<NUM;j++)
        {
            if(a[j]>a[k])
            k=j;
        }
        if(k!=i)
        {
            tmp = a[k];
            a[k] = a[i];
            a[i] = tmp;
        }

    }
}

void printArray(int c[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%-4d",c[i]);
    }
    printf("\n");
}

void merge(int a[],int b[],int c[]) //如果有重复时处理
{
    int i=0,j=0,k=0;
    int total_size = 2 * NUM;
    while((i<NUM)&&(j<NUM))   //循环次数未知，用while；下标i，j，k指向a，b，c
    {
        if(a[i]>b[j])
        {
            if(k==0 || a[i] != c[k-1])
            {
                c[k++] = a[i];
            }
            i++;
        }
        else if(b[j]>a[i])
        {
            if (k == 0 || b[j] != c[k-1])
            {
                c[k++] = b[j];
            }
            j++;
        }
        else
        {
            if (k == 0 || a[i] != c[k-1])
            {
                c[k++] = a[i];
            }
            i++;
            j++;
        }
    }
    while(i<NUM) 
    {
        if (k == 0 || a[i] != c[k-1])
        {
            c[k++] = a[i];//放置数组a的剩余部分
        }
        i++;
    }
    while(j<NUM) 
    {
       if (k == 0 || b[j] != c[k-1])
        {
            c[k++] = b[j];//放置数组b的剩余部分
        }
        j++;
    }
    while (k < total_size) 
    {
        c[k++] = 0;
    }
}



int main()
{
    int a[] = {1,2,3,4,5,6,8,7,9,10};
    int b[] = {15,38,3,4,5,6,7,8,10,9};
    int c[2*NUM] = {0};
    printArray(a,NUM);
    //selectSort(a);
    //printArray(a,NUM);
    //bubbleSort(b);
    //printArray(b,NUM);
    merge(a,b,c);
    printArray(c,2*NUM);
    return 0;
}
