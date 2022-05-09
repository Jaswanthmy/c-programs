#include<stdio.h>
#include<string.h>
char arr[6]={'A','B','C','D','E','F'};
void Deci2Hexadeci()
{
    char t;
    float a,a1,decimal;
    int n,s1=0,i,s2=0,s3=0,j,k,s4;
    int arr1[10];
    int arr2[2];
    printf("Enter decimal number to convert : ");
    // entered number upto two decimal places only .. EX:  2456.20 , 1.15 .even output is limited to 2 decimal places
    scanf("%f",&decimal);
    n=decimal;
    a=decimal-n;
    while(n/16>=1)
    {
        arr1[s1]=n%16;
        n=n/16;
        s1++;
    }
    arr1[s1]=n;
    while(s2<2)
    {
        arr2[s2]=a*16;
        a1=a*16-arr2[s2];
        a=a1;
        s2++;
    }
    s4=s1+s2;
    char hexdeci[s4];
    for(i=s1;i>=0;i--)
    {
        if(arr1[i]<=9)
        {
            hexdeci[s3]=arr1[i]+'0';
            s3++;
        }
        else
        {
            for(j=0;j<6;j++)
            {
                if(arr1[i]==(10+j))
                {
                    hexdeci[s3]=arr[j];
                    s3++;
                }
            }
        }
    }
    hexdeci[s3]='.';
    for(i=0;i<s2;i++)
    {
        if(arr2[i]<=9)
        {
            s3++;
            hexdeci[s3]=arr2[i]+'0';
        }
        else
        {
            for(j=0;j<6;j++)
            {
                if(arr2[i]==(10+j))
                {
                    s3++;
                    hexdeci[s3]=arr[j];
                }
            }
        }
    }
    printf("After conversion : %s\n",hexdeci);
}
void Hexadeci2Deci()
{
    int i,n=0,j,mult=0,k,t=1,t1=16,a,j1,k1;
    float alt=0;
    char hexdeci[10];
    // entered number upto two Hexa decimal places only .. EX:  AB56.20 , D.15 .even output is limited to 2 decimal places
    printf("Enter Hexa decimal number to convert : ");
    scanf("%s",hexdeci);
    for(i=0;i<strlen(hexdeci);i++)
    {
        if(hexdeci[i]=='.')
        {
            break;
        }
        else
        {
            n++;
        }
    }
    for(j=n-1;j>=0;j--)
    {
        if((hexdeci[j]-'0')<=9)
        {
            mult=mult+t*(hexdeci[j]-'0');
        }
        else
        {
            for(k=0;k<6;k++)
            {
                if(hexdeci[j]==arr[k])
                {
                    mult=mult+(10+k)*t;
                }
            }
        }
        t=t*16;
    }
    for(j1=n+1;j1<strlen(hexdeci);j1++)
    {
        a=hexdeci[j1]-'0';
        if(a<=9)
        {
            alt=alt+a/t1;
        }
        else
        {
            for(k1=0;k1<6;k1++)
            {
                if(hexdeci[j1]==arr[k1])
                {
                    alt=alt+(10+k1)/t1;
                }
            }
        }
        t1=t1*16;
    }
    alt=mult+alt;
    printf("After convertion : %.2f\n",alt);
}
int main()
{
    int choice;
    while(choice!=0)
    {
        printf("------menu-------\n");
        printf("1: To convert decimal number to hexadecimal\n");
        printf("2: To convert hexadecimal number into decimal\n");
        printf("0: To exit\n");
        printf("Enter 0-2 --> : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                Deci2Hexadeci();
                break;
            }
            case 2:
            {
                Hexadeci2Deci();
                break;
            }
            case 0:
            {
                printf("\nExited\n");
                break;
            }
            default :
            {
                printf("wrong input...try again\n;");
            }
        }
    }
}
