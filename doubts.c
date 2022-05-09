#include<stdio.h>
void factorial(int a)
{
   int n,i,f=1;
   n=a;
   printf("we need to find factorial of %d\n",n);
   for(i=1;i<=n;i++)
   {
       f=f*i;
   }
   printf("final Result->\n %d",f);
}
// 20BCS065-RAVI GOWRI JASWANTH REDDY
void sum(int b)
{
    int n,sum;
    n=b;
    do
    { 
        sum=sum+n;
        n=n-1;
    } while (n>0);
    printf("final Result after sum of series ->\n%d",sum);
}
void fibanacci(int c)
{
    int n,n1,n2,i;
    printf("we need to find sum of fibanacci series of %d elements",c);
    n1=1;
    n=0;
    for(i=0;i<c;i++)
    {
        n2=n1+n;
        n=n1;
        n1=n2;
    }
    printf("final Result ->\n%d",n2-1);
}
void power(int d,int e)
{
    int a,b,n,i;
    a=e;
    b=d;
    n=1;
    for(i=0;i<b;i++)
    {
        n=n*a;
    }
    printf("final Result ->\n%d",n);

}
int main()
{
    int n1,a,b,c,d,e;
    printf("choose a number \n 1 for factoria\n 2 for sum of series \n3 for fibanocci\n4 for power\n Exit for other\n");
    scanf("%d",&n1);
    switch(n1)
    {
        case 1:
        {
            printf("you have selected case 1\n ");
            printf("number for which you want to find fact is \n");
            scanf("%d",&a);
            factorial(a);
            break;
        }
        case 2:
        {
            printf("you have selected case 2\n ");
            printf(" let number of elements in series is\n");
            scanf("%d",&b);
            sum(b);
            break;
        }
        case 3:
        {
            printf("you have selected case 3\n ");
            printf("let the number of elements in fibanacci series is\n");
            scanf("%d",&c);
            fibanacci(c);
            break;
        }
        case 4:
        {
            printf("you have selected case 4\n ");
            printf("numerator is \n");
            scanf("%d",&d);
            printf("denominator is \n");
            scanf("%d",&e);
            power(d,e);
            break;
        }
        default:
        {
            printf("exit");
            break;
        }
    }

}
