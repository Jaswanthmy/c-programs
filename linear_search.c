#include<stdio.h>
int main()
{
    int z;
    printf("let range of array be\n");
    scanf("%d",&z);
    int arr[z],n;
    switch(k)
{
    case 1:
    {
        printf("number you want to insert is\n");
        scanf("%d",&n);
        i=0;
        j=e;
        for(j=e;j>=1;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=n;
        printf("FINAL RESULT after insertion at first position-->\n{");
        for(i=0;i<e+1;i++)
        {
           printf("%d",arr[i]);
           if(i!=e)
           {
             printf(",");
           }
        }
        printf(" }");
        break;

    }
    case 2:
    {
        printf("number you want to insert is\n");
        scanf("%d",&n);
        i=0;
        arr[e]=n;
        printf("FINAL RESULT after insertion at last position-->\n{");
        for(i=0;i<e+1;i++)
        {
           printf("%d",arr[i]);
           if(i!=e)
           {
             printf(",");
           }
        }
        printf(" }");
        break;
    }
    case 3:
    {
        printf("number you want to insert is\n");
        scanf("%d",&n);
        i=0;
        j=e;
        int postn;
        printf("position to be inserted is\n");
        scanf("%d",&postn);
        for(j=e;j>=postn;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[postn-1]=n;
        printf("FINAL RESULT after insertion at position %d-->\n{",postn);
        for(i=0;i<e+1;i++)
        {
           printf("%d",arr[i]);
           if(i!=e)
           {
             printf(",");
           }
        }
        printf(" }");
        break;
    }
    case 4:
    {
        printf("number you want to insert is\n");
        scanf("%d",&n);
        i=0;
        j=0;
        for(j=0;j<e;j++)
        {
            arr[j]=arr[j+1];
        }
        printf("FINAL RESULT after deletion of first position-->\n{");
        for(i=0;i<e-1;i++)
        {
           printf("%d",arr[i]);
           if(i!=e-1)
           {
             printf(",");
           }
        }
        printf(" }");
        break;
    }
    case 5:
    {
        printf("number you want to insert is\n");
        scanf("%d",&n);
        i=0;
        printf("FINAL RESULT after deletion of last position-->\n{");
        for(i=0;i<e-1;i++)
        {
           printf("%d",arr[i]);
           if(i!=e-1)
           {
             printf(",");
           }
        }
        printf(" }");
        break;
    }
    case 6:
    {
        printf("number you want to insert is\n");
        scanf("%d",&n);
        i=0;
        j=0;
        int postn;
        printf("position to be deleted is\n");
        scanf("%d",&postn);
        for(j=postn-1;j<e;j++)
        {
            arr[j]=arr[j+1];
        }
        printf("FINAL RESULT after deletion of position %d is-->\n{",postn);
        for(i=0;i<e-1;i++)
        {
           printf("%d",arr[i]);
           if(i!=e-1)
           {
             printf(",");
           }
        }
        printf(" }");
        break;
    }
    default:
    {
        printf("EXIT\n");
        break;
    }
}
}