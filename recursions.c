/*    #include<stdio.h>
    void fun(int arr[10])
    {
        int i;
        for(i=0;i<10;i++)
        {
            if(arr[i]%2!=0)
            {
                arr[i]++;
            }
            else
            {
                arr[i]--;
            }
        }
        for(i=0;i<10;i++)
        {
            printf(" %d",arr[i]);
        }
    }
    int main()
    {
        int arr[10],i;
        for(i=0;i<10;i++)
        {
            arr[i]=i+1;
        }
        fun(arr);
        return 0;
    } */
#include<stdio.h>
int text(char arr[100])
{
    char input;
    int itr=0;
    while((input=getchar())!= ';')
    {
        arr[itr++]=input;
    }
    return itr;
}
void text1(char arr[100],int it)
{
    int itr=0;
    while(itr<it)
    {
        putchar(arr[itr++]);
    }
}
int main()
{
    char arr[100];
    int it = text(arr);
    text1(arr,it);
}