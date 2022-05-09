#include<stdio.h>
int matrix1[20];
int* spirallyTraverse(int r, int c, int matrix[][c])
{   
    int i,j,k,l,m=1,n=0,o,p,count=-1,spi;
    int n1=r-1,n2=c-1,n3=0,n4=1;
    if(r>1&&c>1)
    {
        if(r>=c)
        {
            if(r%2==0)
            {
                i=r/2;
                for(j=0;j<i;j++)
                {
                    for(k=n;k<=n2;k++)
                    {
                        count++;
                        matrix1[count]=matrix[n][k];
                    }
                    for(l=m;l<=n1;l++)
                    {
                        count++;
                        matrix1[count]=matrix[l][k-1];
                    }
                    n++;
                    m++;
                    n2--;
                    for(o=n2;o>=n3;o--)
                    {
                        count++;
                        matrix1[count]=matrix[n1][o];
                    }
                    n1--;
                    for(p=n1;p>=n4;p--)
                    {
                        count++;
                        matrix1[count]=matrix[p][n4-1];
                    }
                    n4++;
                    n3++;
                }
                return matrix1;
                
            }
            else
            {
                i=(r/2)+1;
                for(j=0;j<i;j++)
                {
                    for(k=n;k<=n2;k++)
                    {
                        count++;
                        matrix1[count]=matrix[n][k];
                    }
                    for(l=m;l<=n1;l++)
                    {
                        count++;
                        matrix1[count]=matrix[l][k-1];
                    }
                    n++;
                    m++;
                    n2--;
                    for(o=n2;o>=n3;o--)
                    {
                        count++;
                        matrix1[count]=matrix[n1][o];
                    }
                    n1--;
                    for(p=n1;p>=n4;p--)
                    {
                        count++;
                        matrix1[count]=matrix[p][n4-1];
                    }
                    n4++;
                    n3++;
                }
                return matrix1;
            }
        }
        else
        {
            i=(r/2);
            for(j=0;j<=i;j++)
            {
                for(k=n;k<=n2;k++)
                {
                    count++;
                    matrix1[count]=matrix[n][k];
                }
                for(l=m;l<=n1;l++)
                {
                    count++;
                    matrix1[count]=matrix[l][k-1];
                }
                n++;
                m++;
                n2--;
                if(n2>n3 || n1>n4)
                {
                    for(o=n2;o>=n3;o--)
                    {
                        count++;
                        matrix1[count]=matrix[n1][o];
                    }
                    n1--;
                    for(p=n1;p>=n4;p--)
                    {
                        count++;
                        matrix1[count]=matrix[p][n4-1];
                    }
                }
                n4++;
                n3++;
            }
            return matrix1;
        }
    }
    else
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                count++;
                matrix1[count]=matrix[n][k];
            }
        }
        return matrix1;
    }
}
int main()
{
        int tc;
	    scanf("%d", &tc);
	    while(tc--)
        {
            int r, c,i,j;
            scanf("%d", &r);
            scanf("%d", &c);
            int matrix[r][c];
            for(i=0;i<r; i++)
            {
                for(j=0;j<c; j++)
                {
                    scanf("%d", &matrix[i][j]);
                }
            }
            int *result = spirallyTraverse(r, c, matrix);
            for(int i = 0; i < r*c; i++)
            {
                printf("%d ", result[i]);
                printf("\n");
            }
        }

	return 0;
}