#include<stdio.h>

int large(int a[10][10], int m, int n);

int main()
{
    int m,n, a[10][10], result;

    printf("Enter row and column size\n");
    scanf("%d %d", &m, &n);
    printf("Enter matrix elements\n");
    for(int i=0;i< m;i++)
    {
        for(int j=0;j< n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    result = large(a,m,n);
    printf("Largest = %d\n", result);
}


int large(int a[10][10], int m, int n)
{
    int lg = a[0][0];
    for(int i=0;i< m;i++)
    {
        for(int j=0;j< n;j++)
        {
            if(a[i][j]>lg)
            {
                lg = a[i][j];
            }
        }   
    }
    return(lg);
}