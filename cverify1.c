#include<stdio.h>
void dimensions(int *r,int *c,int *r1,int *c1)
{
    printf("enter dimensions of arr... ");
    scanf("%d %d",r,c);
    printf("enter dimensions of arr1... ");
    scanf("%d %d",r1,c1);
}
void add(int arr[10][10],int arr1[10][10],int r,int c,int r1,int c1)
{
    int i,j;
    int arr3[r][c];
    printf("after adding final matrix is...\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            arr3[i][j]=arr[i][j]+arr1[i][j];
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
void substract(int arr[10][10],int arr1[10][10],int r,int c,int r1,int c1)
{
    int i,j;
    int arr3[r][c];
    printf("after substraction final matrix is...\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            arr3[i][j]=arr[i][j]-arr1[i][j];
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
void multiply(int arr[10][10],int arr1[10][10],int r,int c,int r1,int c1)
{
    int i,j,k,a1;
    int arr3[r][c1];
    printf("after multiplication final matrix is...\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            a1=0;
            for(k=0;k<c;k++)
            {
                a1=a1+arr[i][k]*arr1[k][j];
            }
            arr3[i][j]=a1;
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,n=0;
    int r,c,r1,c1,choose;
    int arr[10][10];
    int arr1[10][10];
    printf("let the order of 'arr' be : ");
    scanf("%d %d",&r,&c);
    if(r>10||c>10)
    {
        printf("array oerflow..\n");
    }
    else
    {
        printf("let the order of 'arr1' be : ");
        scanf("%d %d",&r1,&c1);
        if(r1>10||c1>10)
        {
            printf("array oerflow..\n");
        }
        else
        {
            while(choose!=0)
            {
                printf("\n------menu------\n");
                printf("1: to add\n");
                printf("2: to substract\n");
                printf("3: to maultiply\n");
                printf("0: to exit\n");
                printf("enter to choose a matrix function --> ");
                scanf("%d",&choose);
                switch(choose)
                {
                    case 1:
                    {
                        // checking if dimensions of two arrays are same..
                        if(n==0)
                        {
                            if(r==r1&&c==c1)
                            {
                                printf("enter elements of arr -->\n");
                                for(i=0;i<r;i++)
                                {
                                    for(j=0;j<c;j++)
                                    {
                                        scanf("%d",&arr[i][j]);
                                    }
                                }
                                printf("enter elements of arr1 -->\n");
                                for(i=0;i<r;i++)
                                {
                                    for(j=0;j<c;j++)
                                    {
                                        scanf("%d",&arr1[i][j]);
                                    }
                                }
                                add(arr,arr1,r,c,r1,c1);
                            }
                            else
                            {
                                printf("addition not possible....chek dimensions\n");
                            }
                            n++;
                        }
                        else
                        {
                            dimensions(&r,&c,&r1,&c1);
                            if(r==r1&&c==c1)
                            {
                                printf("enter elements of arr -->\n");
                                for(i=0;i<r;i++)
                                {
                                    for(j=0;j<c;j++)
                                    {
                                        scanf("%d",&arr[i][j]);
                                    }
                                }
                                printf("enter elements of arr1 -->\n");
                                for(i=0;i<r;i++)
                                {
                                    for(j=0;j<c;j++)
                                    {
                                        scanf("%d",&arr1[i][j]);
                                    }
                                }
                                add(arr,arr1,r,c,r1,c1);
                            }
                            else
                            {
                                printf("addition not possible....chek dimensions\n");
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        // checking if dimensions of two arrays are same..
                        if(n==0)
                        {
                            if(r==r1&&c==c1)
                            {
                                printf("enter elements of arr -->\n");
                                for(i=0;i<r;i++)
                                {
                                    for(j=0;j<c;j++)
                                    {
                                        scanf("%d",&arr[i][j]);
                                    }
                                }
                                printf("enter elements of arr1 -->\n");
                                for(i=0;i<r;i++)
                                {
                                    for(j=0;j<c;j++)
                                    {
                                        scanf("%d",&arr1[i][j]);
                                    }
                                }
                                substract(arr,arr1,r,c,r1,c1);
                            }
                            else
                            {
                                printf("substraction not possible....chek dimensions\n");
                            }
                            n++;
                        }
                        else
                        {
                            dimensions(&r,&c,&r1,&c1);
                            if(r==r1&&c==c1)
                            {
                                printf("enter elements of arr -->\n");
                                for(i=0;i<r;i++)
                                {
                                    for(j=0;j<c;j++)
                                    {
                                        scanf("%d",&arr[i][j]);
                                    }
                                }
                                printf("enter elements of arr1 -->\n");
                                for(i=0;i<r;i++)
                                {
                                    for(j=0;j<c;j++)
                                    {
                                        scanf("%d",&arr1[i][j]);
                                    }
                                }
                                substract(arr,arr1,r,c,r1,c1);
                            }
                            else
                            {
                                printf("substraction not possible....chek dimensions\n");
                            }
                        }
                        
                        break;
                    }
                    case 3:
                    {
                        // checking if dimensions of two arrays are suitable for multiplication..
                        if(n==0)
                        {
                            if(c==r1)
                            {
                                printf("enter elements of arr -->\n");
                                for(i=0;i<r;i++)
                                {
                                    for(j=0;j<c;j++)
                                    {
                                        scanf("%d",&arr[i][j]);
                                    }
                                }
                                printf("enter elements of arr1 -->\n");
                                for(i=0;i<r1;i++)
                                {
                                    for(j=0;j<c1;j++)
                                    {
                                        scanf("%d",&arr1[i][j]);
                                    }
                                }
                                multiply(arr,arr1,r,c,r1,c1);
                            }
                            else
                            {
                                printf("multiplication not possible....chek dimensions\n");
                            }
                            n++;
                        }
                        else
                        {
                            dimensions(&r,&c,&r1,&c1);
                            if(c==r1)
                            {
                                printf("enter elements of arr -->\n");
                                for(i=0;i<r;i++)
                                {
                                    for(j=0;j<c;j++)
                                    {
                                        scanf("%d",&arr[i][j]);
                                    }
                                }
                                printf("enter elements of arr1 -->\n");
                                for(i=0;i<r1;i++)
                                {
                                    for(j=0;j<c1;j++)
                                    {
                                        scanf("%d",&arr1[i][j]);
                                    }
                                }
                                multiply(arr,arr1,r,c,r1,c1);
                            }
                            else
                            {
                                printf("multiplication not possible....check dimensions\n");
                            }
                        }
                        break;
                    }
                    case 0:
                    {
                        printf("\nexited\n");
                        break;
                    }
                    default:
                    {
                        printf("wrong input... try again\n");
                        break;
                    }
                }
            }
        }
        
    }
    
}