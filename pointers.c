#include<stdio.h>
int main()
{
    int stud,subj,roll,age,marks,arr[10][10],k,t=0;
    printf("NUMBER OF STUDENTS PRESENT ARE-->\n");
    scanf("%d",&stud);
    printf("NUMBER OF SUBJECTS EACH STUDENT HAVE WITH MAX-MARKS=100-->\n");
    scanf("%d",&subj);
    if(stud>10 || subj>10)
    {
        printf("array overflowd");
    }
    else
    {
        for(int i=0;i<stud;i++)
        {
            for(int j=0;j<subj+2;j++)
            {
                if(j==0)
                {
                    printf("ROLL NUMBER OF STUDENT %d IS -->\n",i+1);
                    scanf("%d",&roll);
                    arr[i][j]=roll;
                }
                else if(j==1)
                {
                    printf("AGE OF STUDENT %d IS -->\n",i+1);
                    scanf("%d",&age);
                    arr[i][j]=age;
                }
                else
                {
                    printf("MARKS OBTAINED BY STUDENT %d IN SUBJECT-%d IS -->\n",i+1,j-1);
                    scanf("%d",&marks);
                    arr[i][j]=marks;
                }
            }
        }
        int i=0,j=0;
        for(i=0;i<stud;i++)
        {
            for(j=0;j<subj+2;j++)
            {
                printf("%d  ",arr[i][j]);
            }
            printf(" \n");
        }
        while(t<4)
        {
            printf("CHOOSE ANY BELOW STAT ACCORDING TO YOUR DESIRE BY SELECTING CORESSPONDING NUMBER\n");
            printf("PRESS-- 1 TO GET PRECENTAGE OF EACH STUDENT\n");
            printf("PRESS-- 2 TO GET HIGHEST MARKS IN EACH SUBJET WITH ROLL NUMBER\n");
            printf("PRESS --3 TO GET STUDENT WHO GOT HIGHEST PERCENTAGE\n");
            printf("press--4 IF TWO STUDENTS HAVE SAME PERCENTAGE AND SAME ROLL NUMBER\n");
            scanf("%d",&k);
            switch(k)
            {
                case 1:
                {
                    int i=0,j=0;
                    float perc;
                    for(i=0;i<stud;i++)
                    {
                        float a=0;
                        for(j=2;j<subj+2;j++)
                        {
                            a=a+arr[i][j];
                        }
                        perc=a/subj;
                        printf("PERCENTAGE OF STUDENT %d is--> %f\n",i+1,perc);
                    }
                    break;
                }
                case 2:
                {
                    int i=1,j=0;
                    for(j=2;j<subj+2;j++)
                    {
                        int max=arr[0][j];
                        for(i=1;i<stud;i++)
                        {   
                            if(arr[i][j]>max)
                            {
                                max=arr[i][j];
                            }
                        }
                        i=0;
                        for(i=0;i<stud;i++)
                        {
                            if(arr[i][j]==max)
                            {
                                printf("HIGHEST MARKS OBTAINED IN SUBJECT-%d is -->%d  BY ROLL NUMBER-->%d\n",j-1,max,arr[i][0]);
                                break;
                            }
                        }
                    }
                    break;
                }
                case 3:
                {
                    int i=0,j=0;
                    float perc,per[stud],max;
                    for(i=0;i<stud;i++)
                    {
                        float a=0;
                        for(j=2;j<subj+2;j++)
                        {
                            a=a+arr[i][j];
                        }
                        perc=a/subj;
                        per[i]=perc;
                    }
                    max=per[0];
                    i=1;
                    for(i=1;i<stud;i++)
                    {
                        if(per[i]>max)
                        {
                            max=per[i];
                        }
                    }
                    i=0;
                    for(i=0;i<stud;i++)
                    {
                        if(per[i]==max)
                        {
                            printf("STUDENT WHO SECURED HIGHEST PERCENTAGE IS ROLL NUMBER-->\n%d",arr[i][0]);
                            break;
                        }
                    }
                    break;
                }
                case 4:
                {
                    printf("IF 2 STUDENTS HAVE SAME PERCENTAGE\n");
                    int i=0,j=0,k=0;
                    float perc,per[stud],l;
                    for(i=0;i<stud;i++)
                    {
                        float a=0;
                        for(j=2;j<subj+2;j++)
                        {
                            a=a+arr[i][j];
                        }
                        perc=a/subj;
                        per[i]=perc;
                    }
                    i=0;
                    for(i=0;i<stud;i++)
                    {
                        l=per[i];
                        for(k=0;k<stud;k++)
                        {
                            if(k!=i && l==per[k])
                            {
                                if(arr[i][1]>arr[k][1])
                                {
                                    printf("roll number of younger student is %d\n",arr[k][0]);
                                    break;
                                }
                                else if(arr[i][1]==arr[k][1])
                                {
                                    printf("since both age is same\n");
                                    printf("roll numbers of both students are %d and %d\n",arr[i][0],arr[k][0]);
                                    break;
                                }
                                else
                                {
                                    printf("roll number of younger student is %d\n",arr[i][0]);
                                    break;
                                }
                            }
                            break;
                        }
                    }
                    break;
                }
                default :
                {
                    printf("EXIT\n");
                    break;
                }
            }
            t=t+1;
        }

    }

}