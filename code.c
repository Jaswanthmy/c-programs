#include<stdio.h>
void fun1(int matrix1[10][10],int matrix2[10][10], int b, int c,int d, int e)
{
    int p,l,m,o;
    m=b;
    o=c;
    int matrix3[m][o];
    for(p=0;p<b;p++)
    {
      for(l=0;l<c;l++)
      {
          matrix3[p][l]= matrix1[p][l]+ matrix2[p][l];
          printf("%d ",matrix3[p][l]);
      }
      printf("\n");
    }
}
void fun2(int matrix1[10][10],int matrix2[10][10],int b,int c,int d,int e)
{
    int p,l,m,o;
    m=b;
    o=c;
    int matrix3[m][o];
    for(p=0;p<b;p++)
    {
      for(l=0;l<c;l++)
      {
          matrix3[p][l]=matrix1[p][l]-matrix2[p][l];
          printf("%d",matrix3[p][l]);
      }
      printf("\n");
    }
}
void fun3(int matrix[10][10],int matrix2[10][10],int b,int c,int d,int e)
{
    int p,l,m,o,q,r;
    m=b;
    o=e;
    int matrix3[m][o];
    for(p=0;p<b;p++)
    {
      for(l=0;l<e;l++)
      {
          r=0;
          for(q=0;q<b;q++)
          {
             r=r+1;
          }
          matrix3[p][l]=r;
          printf("%d",matrix3[p][l]);
      }
      printf("\n");
    }
}
int main()
{
  int a,b,c,d,e,f,g,i,j;
  printf("enter the number you want\n");
  printf("1 for addition\n");
  printf("2 for subtraction\n");
  printf("3 for multiplication\n");
  printf("let number of rows and columns of two matrices be\n");
  scanf("%d%d",&b,&c);
  scanf("%d%d",&d,&e);
  int matrix1[b][c];
  int matrix2[d][e];
  if((b>10 || c>10)||(d>10 || e>10))
  {
     printf("matrix overflow");
     return 0;
  }
  else
  {
       printf("after giving inputs to matrix1\n");
      for(i=0;i<b;i++)
      {
        for(j=0;j<c;j++)
        {  
         scanf("%d",&matrix1[i][j]);
        }
        printf("\n");
      }
      i=0;
      j=0;
      printf("after giving inputs to matrix2\n");
      for(i=0;i<b;i++)
      {
       for(j=0;j<c;j++)
       {
          scanf("%d",&matrix2[i][j]);
       }
       printf("\n");
      }
      scanf("%d",&a);
      switch(a)
      {
         case 1:
         {  
           if(b!=d && c!=e)
           {
              printf("addition not possible because dimensions are different");
           }
           else
           {
             fun1(matrix1,matrix2,b,c,d,e);
           }
           break;
         } 
         case 2:
         {
           if(b!=d && c!=e)
           {
              printf("addition not possible because dimensions are different");
           }
           else
           {
             fun2(matrix1,matrix2,b,c,d,e);
           }          
           break;
         }
         case 3:
         {
            if(c!=d)
            {
             printf("multiplicatio not possible");
            }
            else
            {
              fun3(matrix1,matrix2,b,c,d,e);
            }
            break;
         }
         default:
         {
          printf("end");
           break;
         }
      }
    }
}
