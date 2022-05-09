#include<stdio.h>
//RAVI GOWRI JASWANTH , ROLL NUMBER -20BCS065
int main()
{
int z;
printf("let range of array be\n");
scanf("%d",&z);
int arr[z];
int k,n,i=0,e,j,a,b;
printf("let array be arr and the number of elements in array be\n");
scanf("%d",&e);
printf("let values of elements be\n");
for(i=0;i<e;i++)
{
    scanf("%d",&arr[i]);
}
printf(" }\n");
printf("choose the type of program you with an array want by entering its corressponding digit\n");
printf("choose 1 for insertion at first posotion in array\n ");
printf("choose 2 for insertion at last posotion in array\n ");
printf("choose 3 for insertion at any posotion in array\n ");
printf("choose 4 for deletion at first posotion in array\n ");
printf("choose 5 for deletion at last posotion in array\n ");
printf("choose 6 for deletion  at any posotion in array\n 7 for EXIT\n ");
scanf("%d",&k);
switch(k)
{
    case 1:
    {
        if(e>z)
        {
            printf(" program overflowed\n");
        }
        else
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
            printf("}");
            break  ;
        }

    }
    case 2:
    {
        if(e>z)
        {
            printf(" program overflowed\n");
        }
        else
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
        }
        printf("}");
        break;
    }
    case 3:
    {
        if(e>z)
        {
            printf(" program overflowed\n");
        }
        else
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
        }
        printf("}");
        break;
    }
    case 4:
    {
        if(e==0)
        {
            printf(" program underflowed\n");
        }
        else
        {
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
                if(i!=e-2)
                {
                    printf(",");
                }
            }
        }
        printf("}");
        break;
    }
    case 5:
    {
        if(e==0)
        {
            printf(" program underflowed\n");
        }
        else
        {
            i=0;
            printf("FINAL RESULT after deletion of last position-->\n{");
            for(i=0;i<e-1;i++)
            {
                printf("%d",arr[i]);
                if(i!=e-2)
                {
                printf(",");
                }
            }
        }
        printf("}");
        break;
    }
    case 6:
    {
        if(e==0)
        {
            printf(" program underflowed\n");
        }
        else
        {
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
               if(i!=e-2)
               {
                 printf(",");
               }
            }
        }
        printf("}");
        break;
    }
    default:
    {
        printf("EXIT\n");
        break;
    }
}
int postn1,postn2,c=e,d=e+1,r=0;
printf("\n TO INSERT 2 ELEMENTS AT DIFFERENT LOCATIONS IN THE GIVEN ARRAY \n");
printf("elment to be inserted are\n");
scanf("%d%d",&a,&b);
printf("at positions to be inserted are\n");
scanf("%d%d",&postn1,&postn2);
for(c=e;c>=postn1-1;c--)
{
    arr[c]=arr[c-1];
}
arr[postn1-1]=a;
for(d=e+1;d>=postn2-1;d--)
{
    arr[d]=arr[d-1];
}
arr[postn2-1]=b;
printf("FINAL RESULT AFTER INSERSTION OF %d , %d at positions %d ,%d \n{",a,b,postn1,postn2);
for(r=0;r<e+2;r++)
{
    printf("%d",arr[r]);
    if(r!=e+1)
    {
        printf(",");
    }
}
printf("}");
return 0;
}