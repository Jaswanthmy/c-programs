#include<stdio.h>
#include<stdlib.h>
int minimum;
void m(int arr[],int n)
{
    int min=0,i,j,k,sum;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=0;
            for(k=i;k<=j;k++)
            {
                sum=sum+arr[k];
            }
            if(sum<min|| min==0)
            {
                min=sum;
            }
        }
    }
    minimum=min;
    printf("minimum value is %d\n",minimum);
}
void min(int arr[],int n)
{
    int i,j,k,sum,i1,m=0,s,t=0,p,max,h,r;
    int subarr[100];
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=0;
            s=0;
            for(k=i;k<=j;k++)
            {
                sum=sum+arr[k];
                s++;
            }
            if(minimum==sum)
            {
                subarr[t]=i;
                t++;
                subarr[t]=j;
                t++;
                subarr[t]=s;
                t++;
            }
        }
    }
    max=subarr[2];
    for(p=5;p<t+1;p=p+3)
    {
        if(max<subarr[p])
        {
            max=subarr[p];
        }
    }
    for(h=2;h<t+1;h=h+3)
    {
        if(subarr[h]==max)
        {
            r=h;
        }
    }
    printf("final subset is : ");
    printf("{");
    for(i1=subarr[r-2];i1<=subarr[r-1];i1++)
    {
        printf("%d ",arr[i1]);
    }
    printf("}\n");
}
int main()
{
    int n1;
    printf("enter the array for which subarray with minium sum to be found\n");
    printf("let size of array be -->");
    scanf("%d",&n1);
    printf("enter the elements\n");
    int arr[n1];
    int i,j,sum,a=0,i1;
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n1;j++)
    {
        if(arr[j]<0)
        {
            a++;
        }
    }
    if(a==0)
    {
        int min=arr[0];
        for(i1=1;i1<n1;i1++)
        {
            if(arr[i1]<min)
            {
                min=arr[i1];
            }
        }
        printf("final subset is : ");
        printf("{%d}\n",min);
    }
    else
    {
        m(arr,n1);
        min(arr,n1);
    }
    return 0;
}