#include <stdio.h>
#define NUM 10
void bubbleSort(int a[]) // 冒泡排序 (降序)
{
    int i, j;
    int tmp;
    int flag;
    for (i = 0; i < NUM - 1; i++) 
    {
        flag = 1;
        for (j = 0; j < NUM - 1 - i; j++) 
        { 
            if (a[j] < a[j + 1]) 
            { 
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                flag = 0;
            }
        }
        if (flag == 1)
            break;
    }
}

void selectSort(int a[]) // 选择排序 (降序)
{
    int i, j, k;
    int tmp;
    for (i = 0; i < NUM - 1; i++)
     {
        k = i; // 假设最大值在当前位置 i
        for (j = i + 1; j < NUM; j++)
        {
            // 降序：寻找最大值的索引 k
            if (a[j] > a[k]) 
                k = j;
        }

        // 只有当最大值不在当前位置 i 时才交换
        if (k != i) 
        { 
            tmp = a[k];
            a[k] = a[i];
            a[i] = tmp;
        }
    }
}

// 打印数组
void printArray(int c[], int n) 
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%-4d", c[i]);
    }
    printf("\n");
}

// 归并（降序，去重，补0）
void merge(int a[], int b[], int c[]) 
{
    int i = 0, j = 0, k = 0;
    int total_size = 2 * NUM;
    
    // 归并核心部分：降序归并并去重
    while (i < NUM && j < NUM) {
        // 降序：比较 a[i] 和 b[j]，将较大的那个放入 c[]
        if (a[i] > b[j]) 
        {
            // 去重判断
            if (k == 0 || a[i] != c[k - 1]) 
            {
                c[k++] = a[i];
            }
            i++; 
        } 
        else if (b[j] > a[i]) 
        {
            // 去重判断
            if (k == 0 || b[j] != c[k - 1]) 
            {
                c[k++] = b[j];
            }
            j++; 
        } 
        else 
        { // a[i] == b[j] (相等，只取一个)
            if (k == 0 || a[i] != c[k - 1])
            {
                c[k++] = a[i];
            }
            i++;
            j++; // 两个都相等，都向前移动
        }
    }

    // 处理数组 a 的剩余部分 (降序，去重)
    while (i < NUM) {
        if (k == 0 || a[i] != c[k - 1]) 
        {
            c[k++] = a[i];
        }
        i++;
    }

    // 处理数组 b 的剩余部分 (降序，去重)
    while (j < NUM) 
    {
        if (k == 0 || b[j] != c[k - 1]) 
        {
            c[k++] = b[j];
        }
        j++;
    }

    // 补足剩余空间为 0
    while (k < total_size)
     {
        c[k++] = 0;
    }
}


int main()
{
    // 初始数组
    int a[NUM] = {1, 2, 3, 4, 5, 6, 8, 7, 9, 10}; // 您的初始数组
    int b[NUM] = {15, 38, 3, 4, 5, 6, 7, 8, 10, 9}; // 您的初始数组
    int c[2*NUM] = {0}; // 归并结果数组，初始化为0
    
    // 排序
    selectSort(a);
    printArray(a,NUM); // 打印降序排序后的 a

    bubbleSort(b);
    printArray(b,NUM); // 打印降序排序后的 b

    // 归并去重和补0
    merge(a,b,c);
    printArray(c,2*NUM); // 打印最终结果

    return 0;
}