/*Write a program to read a matrix of size m*n and print its transpose.*/
#include<stdio.h>
int main()
{
    int a[100][100], m, n;
    printf("Enter the number of element in row ");
    scanf("%d",&m);
    printf("Enter the number of element in column ");
    scanf("%d",&n);
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix of %d*%d is \n",m,n);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}