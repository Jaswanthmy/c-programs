//RAVI GOWRI JASWANTH _61
#include<stdio.h>
#include<stdbool.h>
const int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int leapyear(int d1,int m1,int y1,int d2,int m2,int y2)
{
    int lp=0,a,b,c,d,e,f;
    if(y1<y2)
    {
        if(y1%100==0)
        {
            if(y1%400==0)
            {
                if(m1>2)
                {
                    lp=0;
                    if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                    {
                        if(m2>2)
                        {
                            lp++;
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                        else
                        {
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
                else
                {
                    lp=1;
                    if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                    {
                        if(m2>2)
                        {
                            lp++;
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                        else
                        {
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
            }
            else
            {
                if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                {
                    if(m2>2)
                    {
                        lp++;
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
            }
        }
        else
        {
            if(y1%4==0)
            {
                if(m1>2)
                {
                    lp=0;
                    if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                    {
                        if(m2>2)
                        {
                            lp++;
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                        else
                        {
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
                else
                {
                    lp=1;
                    if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                    {
                        if(m2>2)
                        {
                            lp++;
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                        else
                        {
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
            }
            else
            {
                if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                {
                    if(m2>2)
                    {
                        lp++;
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
            }
        }
    }
    else if(y1==y2)
    {
        if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
        {
            if(m1<3&&m2<3)
            {
                lp=lp+((y2-(y1+(4-(y1%4))))/4);
            }
            else if(m1<3&&m2>3)
            {
                lp++;
                lp=lp+((y2-(y1+(4-(y1%4))))/4);
            }
            else if(m1>3&&m2<3)
            {
                lp++;
                lp=lp+((y2-(y1+(4-(y1%4))))/4);
            }
            else if(m1>3&&m2>3)
            {
                lp=lp+((y2-(y1+(4-(y1%4))))/4);
            }
        }
    }
    else
    {
        a=d2;
        b=m2;
        c=y2;
        d2=d1;
        m2=m1;
        y2=y1;
        d1=a;
        m1=b;
        y1=c;
        if(y1%100==0)
        {
            if(y1%400==0)
            {
                if(m1>2)
                {
                    lp=0;
                    if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                    {
                        if(m2>2)
                        {
                            lp++;
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                        else
                        {
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
                else
                {
                    lp=1;
                    if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                    {
                        if(m2>2)
                        {
                            lp++;
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                        else
                        {
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
            }
            else
            {
                if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                {
                    if(m2>2)
                    {
                        lp++;
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
            }
        }
        else
        {
            if(y1%4==0)
            {
                if(m1>2)
                {
                    lp=0;
                    if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                    {
                        if(m2>2)
                        {
                            lp++;
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                        else
                        {
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
                else
                {
                    lp=1;
                    if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                    {
                        if(m2>2)
                        {
                            lp++;
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                        else
                        {
                            lp=lp+((y2-(y1+(4-(y1%4))))/4);
                        }
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
            }
            else
            {
                if((y2%400==0)||((y2%100!=0)&&(y2%4==0)))
                {
                    if(m2>2)
                    {
                        lp++;
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                    else
                    {
                        lp=lp+((y2-(y1+(4-(y1%4))))/4);
                    }
                }
            }
        }
    }
    return lp;
}
int main()
{
    int i,j,k=0,l,m,days,lp,t,a=0,b=1;
    int date1[8];
    int date2[8];
    printf("enter the dates to be compared : ");
    char arr[100];
    for(l=0;l<100;l++)
    {
        scanf("%c",&arr[l]);
        if(arr[l]=='.')
        {
            break;
        }
    }
    for(i=0;i<25;i++)
    {
        if(k<8)
        {
            if(arr[i]!=','&&arr[i]!='.'&&arr[i]!='"'&&arr[i]!='-')
            {
                date1[k]=arr[i]-'0';
                k++;
            }
        }
        else if(k<16)
        {
            if(arr[i]!=','&&arr[i]!='.'&&arr[i]!='"'&&arr[i]!='-')
            {
                date2[k-8]=arr[i]-'0';
                k++;
            }
        }
    }
    int d1,m1,y1;
    int d2,m2,y2;
    d1=date1[0]*10+date1[1];
    m1=date1[2]*10+date1[3];
    y1=date1[4]*1000+date1[5]*100+date1[6]*10+date1[7];
    d2=date2[0]*10+date2[1];
    m2=date2[2]*10+date2[3];
    y2=date2[4]*1000+date2[5]*100+date2[6]*10+date2[7];
    printf("%d-%d-%d\n",d1,m1,y1);
    printf("%d-%d-%d\n",d2,m2,y2);
    lp=leapyear(d1,m1,y1,d2,m2,y2);
    printf("number of leap days are : %d\n",lp);
    if(y1>y2)
    {
        if(d1<d2)
        {
            days=d1-d2+lp;
            if(m1<m2)
            {
                while(m1-1!=(m2-b))
                {
                    a=a+months[m2-b];
                    b++;
                }
                days=days-a+(y1-y2)*365;
                printf("%d \n",days);
            }
            else if(m1==m2)
            {
                days=days-a+(y1-y2)*365;
                printf("%d \n",days);
            }
            else
            {
                while(m2!=(m1+b-1))
                {
                    a=a+months[m1+b-1];
                    b++;
                }
                days=days+a+(y1-y2)*365;
                printf("%d \n",days);
            }
        }
        else if(d1==d2)
        {
            days=d1-d2+lp;
            if(m1<m2)
            {
                while(m1-1!=(m2-b))
                {
                    a=a+months[m2-b];
                    b++;
                }
                days=days-a+(y1-y2)*365;
                printf("%d \n",days);
            }
            else if(m1==m2)
            {
                days=days-a+(y1-y2)*365;
                printf("%d \n",days);
            }
            else
            {
                while(m2!=(m1+b-1))
                {
                    a=a+months[m1+b-1];
                    b++;
                }
                days=days+a+(y1-y2)*365;
                printf("%d \n",days);
            }
        }
        else
        {
            days=d1-d2+lp;
            if(m1<m2)
            {
                while(m1-1!=(m2-b))
                {
                    a=a+months[m2-b];
                    b++;
                }
                days=days-a+(y1-y2)*365;
                printf("%d \n",days);
            }
            else if(m1==m2)
            {
                days=days-a+(y1-y2)*365;
                printf("%d \n",days);
            }
            else
            {
                while(m2!=(m1+b-1))
                {
                    a=a+months[m1+b-1];
                    b++;
                }
                days=days+a+(y1-y2)*365;
                printf("%d \n",days);
            }
        }
    }
    else if(y1==y2)
    {
        if(d1<d2)
        {
            days=d1-d2+lp;
            if(m1<m2)
            {
                while(m1-1!=(m2-b))
                {
                    a=a+months[m2-b];
                    b++;
                }
                days=days-a+(y1-y2)*365;
                if(days<0)
                {
                    printf("%d \n",(days*-1));
                }
                else
                {
                    printf("%d \n",days);
                }
            }
            else if(m1==m2)
            {
                days=days-a+(y1-y2)*365;
                if(days<0)
                {
                    printf("%d \n",(days*-1));
                }
                else
                {
                    printf("%d \n",days);
                }
            }
            else
            {
                while(m2!=(m1+b-1))
                {
                    a=a+months[m1+b-1];
                    b++;
                }
                days=days+a+(y1-y2)*365;
                printf("%d \n",days);
            }
        }
        else if(d1==d2)
        {
            days=d1-d2+lp;
            if(m1<m2)
            {
                while(m1-1!=(m2-b))
                {
                    a=a+months[m2-b];
                    b++;
                }
                days=days-a+(y1-y2)*365;
                if(days<0)
                {
                    printf("%d \n",(days*-1));
                }
                else
                {
                    printf("%d \n",days);
                }
            }
            else if(m1==m2)
            {
                days=days-a+(y1-y2)*365;
                if(days<0)
                {
                    printf("%d \n",(days*-1));
                }
                else
                {
                    printf("%d \n",days);
                }
            }
            else
            {
                while(m2!=(m1+b-1))
                {
                    a=a+months[m1+b-1];
                    b++;
                }
                days=days+a+(y1-y2)*365;
                printf("%d \n",days);
            }
        }
        else
        {
            days=d1-d2+lp;
            if(m1<m2)
            {
                while(m1-1!=(m2-b))
                {
                    a=a+months[m2-b];
                    b++;
                }
                days=days-a+(y1-y2)*365;
                if(days<0)
                {
                    printf("%d \n",(days*-1));
                }
                else
                {
                    printf("%d \n",days);
                }
            }
            else if(m1==m2)
            {
                days=days-a+(y1-y2)*365;
                if(days<0)
                {
                    printf("%d \n",(days*-1));
                }
                else
                {
                    printf("%d \n",days);
                }
            }
            else
            {
                while(m2!=(m1+b-1))
                {
                    a=a+months[m1+b-1];
                    b++;
                }
                days=days+a+(y1-y2)*365;
                printf("%d \n",days);
            }
        }
    }
    else
    {

    }
}