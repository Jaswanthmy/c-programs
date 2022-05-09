#include<stdio.h>
int arr[10][5];
int arr1[10][5];
int n=0;
void stddetail()
{
    if(n>=10)
    {
        // data overflow..
        printf("No space left to store data..\n");
    }
    else
    {
        printf("Enter the student %d details...\n",n+1);
        printf("Roll number|-->Age | subject1 mrk | subject2 mrk |  subject3 mrk  |\n");
        scanf("%d\t%d\t%d\t%d\t%d",&arr[n][0],&arr[n][1],&arr[n][2],&arr[n][3],&arr[n][4]);
        n++;
    }
}
void studentpercnt()
{
    int i=0;
    float percent;
    while(i<n)
    {
        percent=(arr[i][2]+arr[i][3]+arr[i][4])/3.0;
        printf("percentage of student %d with Roll number = %d is :  %.2f\n",i+1,arr[i][0],percent);
        i++;
    }
}
void highestmark()
{
    int i,j,max,roll;
    for(j=2;j<5;j++)
    {
        i=0;
        max=arr[i][j];
        roll=arr[i][0];
        while(i<(n-1))
        {
            if(max<arr[i+1][j])
            {
                max=arr[i+1][j];
                roll=arr[i+1][0];
            }
            i++;
        }
        printf("highest marks in subject %d by student whose roll number = %d is : %d\n",j-1,roll,max);
    }
}
void highestpercnt()
{
    int i=0,j=0,k=0,l=0,m,min,roll,o;
    int arr2[10];
    int arr3[10];
    int arr4[10];
    float percent,max;
    percent=(arr[i][2]+arr[i][3]+arr[i][4])/3.0;
    max=percent;
    while(i<(n-1))
    {
        if(max<((arr[i+1][2]+arr[i+1][3]+arr[i+1][4])/3.0))
        {
            max=(arr[i+1][2]+arr[i+1][3]+arr[i+1][4])/3.0;
        }
        i++;
    }
    while(j<(n))
    {
        if(max==((arr[j][2]+arr[j][3]+arr[j][4])/3.0))
        {
            arr2[k]=arr[j][1];
            arr3[k]=arr[j][0];
            k++;
        }
        j++;
    }
    if(k>1)
    {
        min=arr2[0];
        roll=arr3[0];
        for(m=1;m<k;m++)
        {
            if(min>arr2[m])
            {
                min=arr2[m];
                roll=arr3[m];
            }
        }
        for(m=0;m<k;m++)
        {
            if(min==arr2[m])
            {
                arr4[l]=arr3[m];
                l++;
            }
        }
        if(l>1)
        {
            printf("%d students have same highest percent and age .. They are\n",l);
            printf("students with roll number ");
            for(o=0;o<l;o++)
            {
                printf(" %d ,",arr4[o]);
            }
            printf("have highest percentage %.2f\n",max);
        }
        else
        {
            printf("student with highest percentage has roll number = %d ,age = %d and percentage =%.2f\n",roll,min,max);
        }
    }
    else
    {
        printf("student with highest percentage has roll number = %d and percentage =%.2f\n",arr3[0],max);
    }
}
int main()
{
    int i,std;
    printf("Number of students data to be added : ");
    scanf("%d",&std);
    if(std>10)
    {
        // data overflow..
        printf("No space left to store data...enter data of less than 10 students \n");
    }
    else
    {
        while(n<std)
        {
            printf("Enter the student %d details...\n",n+1);
            printf("Roll number|-->Age | subject1 mrk | subject2 mrk |  subject3 mrk  |\n");
            scanf("%d\t%d\t%d\t%d\t%d",&arr[n][0],&arr[n][1],&arr[n][2],&arr[n][3],&arr[n][4]);
            n++;
            if(n>=10)
            {
                // data overflow..
                printf("No space left to store data..\n");
                break;
            }
        }
        int choice;
        while(choice!=0)
        {
            printf("\n-----menu-----\n");
            printf("1: To find percentage of all students\n");// including roll number of students..
            printf("2: To find highest marks in each subject\n");// including roll number of students..
            printf("3: To find student with highest percentage\n");
            // if students have same percentage disply the student who is youngest , if ages are also same then display them 
            printf("4: To Add details of another student\n");
            printf("0: To exit\n");
            printf("Enter 0-3 -->  ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                {
                    studentpercnt();
                    break;
                }
                case 2:
                {
                    highestmark();
                    break;
                }
                case 3:
                {
                    highestpercnt();
                    break;
                }
                case 4:
                {
                    stddetail();
                    break;
                }
                case 0:
                {
                    printf("\nExited\n");
                    break;
                }
                default:
                {
                    printf("Wrong input...try again\n");
                    break;
                }
            }
        }
    }



}