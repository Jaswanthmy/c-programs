#include<stdio.h>
int arr[10][10];
void spiral(int r,int c)
{
    int k=0,l=0,i;
    printf("Spiral form of mentioned matrix is : { ");
    while(k<r&&l<c)
    {
        for(i=l;i<c;i++)
        {
            printf("%d ",arr[k][i]);
        }
        k++;
        for(i=k;i<r;i++)
        {
            printf("%d ",arr[i][c-1]);
        }
        c--;
        if(l<c)
        {
            for(i=c-1;i>=1;i--)
            {
                printf("%d ",arr[r-1][i]);
            }
            r--;
        }
        if(k<r)
        {
            for(i=r;i>=k;i--)
            {
                printf("%d ",arr[i][l]);
            }
            l++;
        }
    }
    printf("}\n");
}
int main()
{
    int r,c;
    printf("Enter the order of matrix rows and columns :  ");
    scanf("%d %d",&r,&c);
    printf("Enter elements of the matrix..\n");
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    spiral(r,c);
}