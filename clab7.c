#include<stdio.h>
void text(char arr[100])
{
    char input;
    int itr=0;
    while((input=getchar()) != ';')
    {
    arr[itr++]= input;
    }
}
void spaces(char arr[100])
{
    int i,j,k=0;
    char arr1[100];
    for(i=0;i<100;i++)
    {
        if(arr[i]!='\0')
        {
            arr1[i]=arr[i];
        }
    }
    for(j=0;j<i;j++)
    {
        if(arr1[j]==' ')
        {
            k=k+1;
        }
    }
    printf("NUMBER OF SPACE IN TEXT IS : %d\n",k);
}
void tabs(char arr[100])
{
    int i,j,k=0;
    char arr1[100];
    for(i=0;i<100;i++)
    {
        if(arr[i]!='\0')
        {
            arr1[i]=arr[i];
        }
    }
    for(j=0;j<i;j++)
    {
        if(arr1[j]=='\t')
        {
            k=k+1;
        }
    }
    printf("NUMBER OF TABS IN TEXT IS : %d\n",k);
}
void sentences(char arr[100])
{
    int i,j,k=0;
    char arr1[100];
    for(i=0;i<100;i++)
    {
        if(arr[i]!='\0')
        {
            arr1[i]=arr[i];
        }
    }
    for(j=0;j<i;j++)
    {
        if(arr1[j]=='.' || arr1[j]=='?')
        {
            k=k+1;
        }
    }
    if(k==0)
    {
        k++;
    }
    printf("NUMBER OF SENTENCES IN TEXT IS : %d\n",k);
}
void lines(char arr[100])
{
    int i,j,k=0;
    char arr1[100];
    for(i=0;i<100;i++)
    {
        if(arr[i]!='\0')
        {
            arr1[i]=arr[i];
        }
    }
    for(j=0;j<i;j++)
    {
        if(arr1[j]=='\n')
        {
            k=k+1;
        }
    }
    printf("NUMBER OF LINES IN TEXT IS : %d\n",k);
}
void vowels(char arr[100])
{
    int i,j,k=0,l;
    char arr1[100];
    for(i=0;i<100;i++)
    {
        if(arr[i]!='\0')
        {
            arr1[i]=arr[i];
        }
    }
    for(j=0;j<i;j++)
    {
        if(arr1[j]=='a'||arr1[j]=='e'||arr1[j]=='i'||arr1[j]=='o'||arr1[j]=='u')
        {
            k=k+1;
        }
    }
    printf("NUMBER OF VOWELS IN TEXT IS : %d\n",k);
/* for(l=0;l<i;l++)
{
if(arr[l]=='\t')
{
arr[l]=' ';
}
} */
// above code to change multiple spaces into single space
}
int main()
{
        int i,j=0,k;
        char arr[100],arr1[100];
        printf("ENTER THE TEXT ;\n");
        text(arr);
        while(i!=6)
        {
            printf("ENTER NUMBER TO FIND CORESPONDING RESULTS : \n");
            printf("1: TO FIND NUMBER OF SPACES\n");
            printf("2: TO FIND NUMBER OF TABS\n");
            printf("3: TO FIND NUMBER OF SENTENCES\n");
            printf("4: TO FIND NUMBER OF LINES\n");
            printf("5: TO FIND NUMBER OF VOWELS\n");
            printf("6: TO EXIT\n");
            scanf("%d",&i);
            if(i!=6)
            {
                switch(i)
                {
                    case 1:
                    {
                        spaces(arr);
                        break;
                    }
                    case 2:
                    {
                        tabs(arr);
                        break;
                    }
                    case 3:
                    {
                        sentences(arr);
                        break;
                    }
                    case 4:
                    {
                        lines(arr);
                        break;
                    }

                    case 5:
                    {
                        vowels(arr);
                        break;
                    }
                }
            }
            else
            {
                printf("EXIT");
                break;
            }
        }
}