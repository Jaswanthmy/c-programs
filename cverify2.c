#include<stdio.h>
int arr[100];
int n=-1,s;
// here n represents last element and (n+1)= position of last element..
void display()
{
    int i;
    printf("Display : ");
    for(i=0;i<=n;i++)
    {
        printf("%d |",arr[i]);
    }
    printf("\n");
}
void insertbeg(int a)
{
    int i;
    // if (n+1) or 'position' of last element of array = (s) or 'length of array' then we cant add more.
    if((n+1)>=s)
    {
        printf("array overflow...\n");
    }
    else
    {
        n++;
        if(n==0)
        {
            arr[0]=a;
        }
        else
        {
            for(i=n;i>0;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[0]=a;
        }
    }
    display();
}
void insertend(int a)
{
    int i;
    if((n+1)>=s)
    {
        printf("array overflow...\n");
    }
    else
    {
        n++;
        arr[n]=a;
    }
    display();
}
void insertpostn(int a)
{
    int t;
    int i;
    if((n+1)>=s)
    {
        printf("array overflow...\n");
    }
    else
    {
        n++;
        printf("Enter the position to insert : ");
        scanf("%d",&t);
        for(i=n;i>t-1;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[t-1]=a;
    }
    display();
}
void deletebeg()
{
    int i;
    if(n==-1)
    {
        printf("array underflow...\n");
    }
    else
    {
        printf("deleted element is : %d\n",arr[0]);
        for(i=0;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
    }
    display();
}
void deleteend()
{
    int i;
    if(n==-1)
    {
        printf("array underflow...\n");
    }
    else
    {
        printf("deleted element is : %d\n",arr[n]);
        n--;
    }
    display();
}
void deletepostn()
{
    int i,t;
    if(n==-1)
    {
        printf("array underflow...\n");
    }
    else
    {
        printf("Enter the position to delete : ");
        scanf("%d",&t);
        printf("deleted element is : %d\n",arr[t-1]);
        for(i=t-1;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
    }
    display();
}
int main()
{
    int choice,a;
    printf("Please enter the size of the array : ");
    scanf("%d",&s);
    while(choice!=0)
    {
        printf("------menu------\n");
        printf("1: to Insert at beginning\n");
        printf("2: to Insert at end\n");
        printf("3: to Insert at any position\n");
        printf("4: to Delete at beginning\n");
        printf("5: to Delete at end\n");
        printf("6: to Delete at any position\n");
        printf("0: to Exit\n");
        printf("enter 0-6 --> : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {   printf("enter the element to be inserted : ");
                scanf("%d",&a);
                insertbeg(a);
                break;
            }
            case 2:
            {
                printf("enter the element to be inserted : ");
                scanf("%d",&a);
                insertend(a);
                break;
            }
            case 3:
            {
                printf("enter the element to be inserted : ");
                scanf("%d",&a);
                insertpostn(a);
                break;
            }
            case 4:
            {
                deletebeg();
                break;
            }
            case 5:
            {
                deleteend();
                break;
            }
            case 6:
            {
                deletepostn();
                break;
            }
            case 0:
            {
                printf("\nExited\n");
                break;
            }
            default :
            {
                printf("Wrong entry...try again\n");
                break;
            }
        }
    }
}