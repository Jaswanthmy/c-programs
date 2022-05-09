/* RAVI GOWRI JASWANTH REDDY
    20BCS065 */


#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node *ptr,*front=NULL,*rear=NULL,*top;
int n=0;
void display()
{
    int i;
    struct node *temp=front;
    if(n!=0)
    {
        for(i=0;i<(n);i++)
        {
            printf("%d |",temp->val);
            temp=temp->next;
        }
        printf("\n");
    }
    else
    {
        printf("no elements present...\n");
    }
}
void insrtbeg(int a)
{
    int i;
    ptr=malloc(sizeof(struct node));
    ptr->val=a;
    if(front==NULL&&rear==NULL)
    {
        front=rear=ptr;
        n++;
    }
    else
    {
        ptr->next=front;
        front=ptr;
        n++;
    }
    display();
}
void insrtend(int a)
{
    struct node *temp=front;
    struct node *newnode = malloc(sizeof(struct node));
    newnode->val=a;
    newnode->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=newnode;
        n++;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        n++;
    }
    display();
}
void insrtposition(int a)
{
    int r,i=0;
    printf("enter the position at which element to be added : ");
    scanf("%d",&r);
    struct node *temp=front;
    struct node *newnode = malloc(sizeof(struct node));
    newnode->val=a;
    newnode->next=NULL;
    if(r<=n)
    {
        if(r>1)
        {
            for(i=0;i<(r-2);i++)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
            n++;
            display();
        }
        else
        {
            insrtbeg(a);
        }
    }
    else
    {
        printf("number enterd is out of bounds..\n");
    }
}
void deletbeg()
{
    if(n==0)
    {
        printf("underflow...\n");
    }
    else
    {
        printf("deleted element is %d\n",front->val);
        front=front->next;
        n--;
    }
    display();

}
void deletend()
{
    struct node *temp=front;
    if(n==0)
    {
        printf("underflow...\n");
    }
    else
    {
        if(n!=1)
        {
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            printf("deleted element is : %d\n",temp->next->val);
            temp->next=NULL;
            n--;
        }
        else
        {
            printf("deleted element is : %d\n",temp->val);
            front=front->next;
            n--;
        }
    }
    display();

}
void deletposition()
{
    struct node *temp=front;
    int r,i;
    printf("enter postion at which element to be deleted ");
    scanf("%d",&r);
    if(r<=n)
    {
        if(r>1)
        {
            for(i=0;i<(r-2);i++)
            {
                temp=temp->next;
            }
            printf("deleted element is : %d \n",temp->next->val);
            temp->next=temp->next->next;
            n--;
            display();
        }
        else
        {
            deletbeg();
        }
    }
    else
    {
        printf("number enterd is out of bounds..\n");
    }
}
void totalelements()
{
    printf("total number of elements are : %d \n",n);
    display();
}
void sumofelements()
{
    struct node *temp=front;
    int a=0;
    if(n!=0)
    {
        while(temp!=NULL)
        {
            a=a+temp->val;
            temp=temp->next;
        }
        printf("sum of elemets is : %d\n",a);
    }
    else
    {
        printf("linked list is empty...\n");
    }
    display();
}
void serchitem()
{
    struct node *temp=front;
    int a,t=0,c=0;
    printf("element to be searched is : ");
    scanf("%d",&a);
    while(temp!=NULL)
    {
        t++;
        if(temp->val==a)
        {
            printf("element found at '%dth' position\n",t);
            break;
        }
        else
        {
            c++;
        }
        temp=temp->next;
    }
    if(c==n)
    {
        printf("no element found..\n");
    }
    display();
}
void maxnum()
{
    struct node *temp=front;
    int max,t;
    if(n!=0)
    {
        max=temp->val;
        while(temp!=NULL)
        {
            t=temp->val;
            if(t>max)
            {
                max=temp->val;
            }
            temp=temp->next;
        }
        printf("element with maximum value is : %d\n",max);
    }
    else
    {
        printf("no element found..\n");
    }
    display();
}
int main()
{
    int value, choice=1,a,b,c;
    while(choice!=0)
    {
        printf("\n------menu-----\n");
        printf("1: to insert at beg\n");
        printf("2: to insert at end\n");
        printf("3: to insert at given position\n");
        printf("4: to deletion from beg\n");
        printf("5: to deletion from end\n");
        printf("6: to deletion from given position\n");
        printf("7: to total number of elements\n");
        printf("8: to sum of elements of linked list\n");
        printf("9: to search of item\n");
        printf("10: to maximum number in linked list\n");
        printf("11: to display\n");
        printf("0: to exit\n");
        printf("enter : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
            {
                printf("\nexited\n");
                break;
            }
            case 1:
            {
                printf("enter number to be inserted : ");
                scanf("%d",&a);
                insrtbeg(a);
                break;
            }
            case 2:
            {
                printf("enter number to be inserted : ");
                scanf("%d",&b);
                insrtend(b);
                break;
            }
            case 3:
            {
                printf("enter number to be inserted : ");
                scanf("%d",&c);
                insrtposition(c);
                break;
            }
            case 4:
            {
                 deletbeg();
                break;
            }
            case 5:
            {
                 deletend();
                break;
            }
            case 6:
            {
                deletposition();
                break;
            }
            case 7:
            {
                totalelements();
                break;
            }
            case 8:
            {
                sumofelements();
                break;
            }
            case 9:
            {
                serchitem();
                break;
            }
            case 10:
            {
                maxnum();
                break;
            }
            case 11:
            {
                display();
                break;
            }
            default:
            {
                printf("wrong selection try again\n");
                break;
            }
        }
    }
}