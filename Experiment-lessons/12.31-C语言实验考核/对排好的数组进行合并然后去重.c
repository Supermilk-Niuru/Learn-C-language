#include<stdio.h>
#include<string.h>
#define NUM 4
void merge(int *a,int *b,int *c);
int main()
{
    int i;
    int a[NUM]={2,3,5,5},b[NUM]={1,2,4,5},c[2*NUM];
    merge(a,b,c);
	for(i=0;i<2*NUM;i++)
    {
		printf("%d ",c[i]);
    }
	printf("\n");
}
void merge(int *a,int *b,int *c)
{
	int i,j,k;
	i = j = k = 0;
	memset(c,0,2*NUM*sizeof(int)); 
	while(i<NUM && j<NUM)
	{
		if(a[i]<b[j])   
			if(k==0 || c[k-1]!=a[i]) 
				c[k++] = a[i++];
			else
				i++;
		else 
			if(k==0 || c[k-1]!=b[j])
				c[k++] = b[j++];
			else
				j++;

	}
	while(i<NUM) 
	{
		if(k==0 || c[k-1]!=a[i])
			c[k++] = a[i++];
		else
			i++;
	}		
	while(j<NUM)
	{
		if(k==0 || c[k-1]!=b[j])
			c[k++] = b[j++];
		else
			j++;
	}	
}