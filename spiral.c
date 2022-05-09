#include <stdio.h>
void spiral(int arr[10][10],int r,int c)
{
    int i,t=0,l=0;
    while(t<r&&l<c)
    {
        for(i=l;i<c;++i)
        {
            printf("%d ",arr[t][i]);
        }
        t++;
        for(i=t;i<r;++i)
        {
            printf("%d ",arr[i][c-1]);
        }
        c--;
        if(t<r)
        {
            for(i=c-1;i>=l;--i)
            {
                printf("%d ",arr[r-1][i]);
            }
            r--;
        }
        if(l<c)
        {
            for(i=r-1;i>=t;--i)
            {
                printf("%d ",arr[i][l]);
            }
            l++;
        }
    }
}
int main()
{
    int r,c;
    printf("let number of rows and columns be\n");
    scanf("%d",&r);
    scanf("%d",&c);
    int i,j;
    int arr[10][10];
    printf("enter the elements\n");
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    spiral(arr,r,c);
    return 0;
}