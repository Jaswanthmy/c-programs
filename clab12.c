/*
RAVI GOWRI JASWANTH 
20BCS065
*/

//  only appicable if all values are positve ..
#include<stdio.h>
#include<string.h>
void text(char arr[30])
{
    char input;
    int itr=0;
    while((input=getchar()) != '\n')
    {
    arr[itr++]= input;
    }
}
void add(float creal1,float creal2,float cimg1,float cimg2,int max)
{
    printf("after addn : %f+(%f)i\n",creal1+creal2,cimg1+cimg2);
}
void sub(float creal1,float creal2,float cimg1,float cimg2,int max)
{
    printf("after substraction : %f+(%f)i\n",creal1-creal2,cimg1-cimg2);
}
void mult(float creal1,float creal2,float cimg1,float cimg2,int max)
{
    printf("after multiplication : %f+(%f)i\n",creal1*creal2-cimg2*cimg1,cimg1*creal2+cimg2*creal1);
}
void div(float creal1,float creal2,float cimg1,float cimg2,int max)
{
    printf("after divisionn : %f+(%f)i\n",(creal1*creal2+cimg2*cimg1)/(creal2*creal2+cimg2*cimg2),(cimg1*creal2-cimg2*creal1)/(creal2*creal2+cimg2*cimg2));
}
int main()
{
    char arr[30];
    int a,i=0,j=0,z=0,neg=0,k=0,t=0,ci1=1,ci2=1,d=0,b=0,c=0,e=0;
    float creal1=0,cimg1=0,creal2=0,cimg2=0,n=10;
    printf("Enter the complex numbers to perform operations\n");
    text(arr);
    if(strlen(arr)>30)
    {
        printf("overflow...\n");
    }
    else
    {
        if(neg==0)
        {
            while(arr[j]!='+')
            {
                if(arr[j]=='.')
                {
                    z++;
                }
                j++;
            }
            if(z>0)
            {
                while(arr[i]!='.')
                {
                    creal1=creal1*10+(arr[i]-'0');
                    i++;
                }
                i++;
                while(arr[i]!='+')
                {
                    creal1=creal1+(arr[i]-'0')/n;
                    n=n*10;
                    b++;
                    i++;
                }
                i++;
                printf("  %f \n",creal1);
            }
            else
            {
                
                while(arr[i]!='+')
                {
                    creal1=creal1*10+(arr[i]-'0');
                    i++;
                }
                printf("  %f \n",creal1);
                i++;
            }
            z=0;
            n=10;
            while(arr[j]!='i')
            {
                if(arr[j]=='.')
                {
                    z++;
                }
                j++;
            }
            if(z>0)
            {
                while(arr[i]!='.')
                {
                    cimg1=cimg1*10+(arr[i]-'0');
                    i++;
                }
                i++;
                while(arr[i]!='i')
                {
                    cimg1=cimg1+(arr[i]-'0')/n;
                    n=n*10;
                    c++;
                    i++;
                }
                i=i+2;
                printf("  %f \n",cimg1);
            }
            else
            {
                while(arr[i]!='i')
                {
                    cimg1=cimg1*10+(arr[i]-'0');
                    i++;
                }
                printf("  %f \n",cimg1);
                i=i+2;
            }
            z=0;
            n=10;
            while(arr[j]!='+')
            {
                if(arr[j]=='.')
                {
                    z++;
                }
                j++;
            }
            if(z>0)
            {
                while(arr[i]!='.')
                {
                    creal2=creal2*10+(arr[i]-'0');
                    i++;
                }
                i++;
                while(arr[i]!='+')
                {
                    creal2=creal2+(arr[i]-'0')/n;
                    n=n*10;
                    d++;
                    i++;
                }
                i++;
                printf("  %f \n",creal2);
            }
            else
            {
                while(arr[i]!='+')
                {
                    creal2=creal2*10+(arr[i]-'0');
                    i++;
                }
                printf("  %f \n",creal2);
                i++;
            }
            z=0;
            n=10;
            while(arr[j]!='i')
            {
                if(arr[j]=='.')
                {
                    z++;
                }
                j++;
            }
            if(z>0)
            {
                while(arr[i]!='.')
                {
                    cimg2=cimg2*10+(arr[i]-'0');
                    i++;
                }
                i++;
                while(arr[i]!='i')
                {
                    cimg2=cimg2+(arr[i]-'0')/n;
                    n=n*10;
                    e++;
                    i++;
                }
                printf("  %f \n",cimg2);
            }
            else
            {
                while(arr[i]!='i')
                {
                    cimg2=cimg2*10+(arr[i]-'0');
                    i++;
                }
                printf("  %f \n",cimg2);
            }
        }
        int max=b;
        if(b>c&&b>d&&b>e)
        {
            max=b;
        }
        if(c>b&&c>d&&c>e)
        {
            max=c;
        }
        if(d>b&&d>c&&d>e)
        {
            max=d;
        }
        if(e>b&&e>c&&e>d)
        {
            max=e;
        }
        while(a!=0)
        {
            printf("\n-----menu-----\n");
            printf("1: to add\n");
            printf("2: to substract\n");
            printf("3: to multiply\n");
            printf("4: to divide\n");
            printf("0: to exit\n");
            printf("Enter 0-4 ?  ");
            scanf("%d",&a);
            switch(a)
            {
                case 0 :
                {
                    printf("Exited..\n");
                    break;
                }
                case 1 :
                {
                    add(creal1,creal2,cimg1*ci1,cimg2*ci2,max);
                    break;
                }
                case 2 :
                {
                    sub(creal1,creal2,cimg1*ci1,cimg2*ci2,max);
                    break;
                }
                case 3 :
                {
                    mult(creal1,creal2,cimg1*ci1,cimg2*ci2,max);
                    break;
                }
                case 4 :
                {
                    div(creal1,creal2,cimg1*ci1,cimg2*ci2,max);
                    break;
                }
                default :
                {
                    printf("wrong input... try again\n");
                    break;
                }
            }

        }
    }
    
}