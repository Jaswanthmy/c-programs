#include<stdio.h>
int main()
{
    printf("Choose any of below method by entering alloted number\n");
    printf("enter 1--> To convert number system from decimal to hexadecimal\n");
    printf("enter 2--> To convert number system from hexadecimal to decimal\n");
    printf("enter 3-->to EXIT\n");
    int dig;
    scanf("%d",&dig);
    switch(dig)
    {
        case 1:
        {
            int i=0,dec,j,n;
            printf("decimal number given is-->\n");
            scanf("%d",&dec);
            char arr[100];
            while(dec!=0)
            {
                int temp=0;
                temp=dec%16;
                if(temp<10)
                {
                    switch(temp)
                    {
                        case 0:
                        {
                            arr[i]="0";
                            break;
                        }
                        case 1:
                        {
                            arr[i]="1";
                            break;
                        }
                        case 2:
                        {
                            arr[i]="2";
                            break;
                        }
                        case 3:
                        {
                            arr[i]="3";
                            break;
                        }
                        case 4:
                        {
                            arr[i]="4";
                            break;
                        }
                        case 5:
                        {
                            arr[i]="5";
                            break;
                        }
                        case 6:
                        {
                            arr[i]="6";
                            break;
                        }
                        case 7:
                        {
                            arr[i]="7";
                            break;
                        }
                        case 8:
                        {
                            arr[i]="8";
                            break;
                        }
                        case 9:
                        {
                            arr[i]="9";
                            break;
                        }
                        default:
                        {
                            break;
                        }

                    }
                    i++;
                }
                else
                {
                    switch(temp)
                    {
                        case 10:
                        {
                            arr[i]="A";
                            break;
                        }
                        case 11:
                        {
                            arr[i]="B";
                            break;
                        }
                        case 12:
                        {
                            arr[i]="C";
                            break;
                        }
                        case 13:
                        {
                            arr[i]="D";
                            break;
                        }
                        case 14:
                        {
                            arr[i]="E";
                            break;
                        }
                        case 15:
                        {
                            arr[i]="F";
                            break;
                        }
                        case 16:
                        {
                            arr[i]="G";
                            break;
                        }
                        default:
                        {
                            break;
                        }
                    }
                    i++;
                }
                n=n/16;
            }
            for(j=i-1;j>=0;j--)
            {
                printf("%c",arr[j]);
            }
            break;
        }
        case 2:
        {
            int a,b,n,sum=0,c=1,m;
            char arr[100];
            printf("\ngiven hexadecimal number having digits is-->\n");
            scanf("%s",&arr);
            scanf("%d",&a);
            n=a;
            m=a;
            while(a!=0)
            {
                while(n-m!=0)
                {
                    c=c*16;
                    m=m+1;
                }
                switch(arr[a-1])
                {
                    case 'A':
                    {
                        b=10;
                        sum+=b*c;
                        break;
                    }
                    case 'B':
                    {
                        b=11;
                        sum+=b*c;
                        break;
                    }
                    case 'C':
                    {
                        b=12;
                        sum+=b*c;
                        break;
                    }
                    case 'D':
                    {
                        b=13;
                        sum+=b*c;
                        break;
                    }
                    case 'E':
                    {
                        b=14;
                        sum+=b*c;
                        break;
                    }
                    case 'F':
                    {
                        b=15;
                        sum+=b*c;
                        break;
                    }
                    case 'G':
                    {
                        b=16;
                        sum+=b*c;
                        break;
                    }
                    default:
                    {
                        break;
                    }
                }
                switch(arr[a-1])
                {
                    case '0':
                    {
                        b=0;
                        sum=sum+b*c;
                        break;
                    }
                    case '1':
                    {
                        b=1;
                        sum=sum+b*c;
                        break;
                    }
                    case '2':
                    {
                        b=2;
                        sum=sum+b*c;
                        break;
                    }
                    case '3':
                    {
                        b=3;
                        sum=sum+b*c;
                        break;
                    }
                    case '4':
                    {
                        b=4;
                        sum=sum+b*c;
                        break;
                    }
                    case '5':
                    {
                        b=5;
                        sum=sum+b*c;
                        break;
                    }
                    case '6':
                    {
                        b=6;
                        sum=sum+b*c;
                        break;
                    }
                    case '7':
                    {
                        b=7;
                        sum=sum+b*c;
                        break;
                    }
                    case '8':
                    {
                        b=8;
                        sum=sum+b*c;
                        break;
                    }
                    case '9':
                    {
                        b=9;
                        sum=sum+b*c;
                        break;
                    }
                    default:
                    {
                        break;
                    }
                }
                a=a-1;
                m=m-1;
            }
            printf("after decimal tranformation-->\n");
            printf("%d",sum);
            break;
        }
        default:
        {
            printf("EXIT");
            break;
        }
    }
}
