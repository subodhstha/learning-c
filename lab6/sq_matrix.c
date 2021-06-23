/*Write a program to read a square matrix from keyboard and find the sum of diagonal elements (trace of the matrix).*/
#include<stdio.h>
int main()
{
    int a[100][100], n, sum=0;
    printf("Enter the number of row & column ");
    scanf("%d",&n);
    printf("Enter the elements of matrix\n");
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The square matrix is \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t",a[i][j]);
            if (i == j)
            {
                sum = sum +a[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum of the diagonal is %d",sum);
    
}