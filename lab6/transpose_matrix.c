/*Write a program to read a matrix of size m*n and print its transpose.*/
#include<stdio.h>
int main()
{
    int a[100][100], m, n;
    printf("Enter the number of row ");
    scanf("%d",&m);
    printf("Enter the number of column ");
    scanf("%d",&n);
    printf("Enter the element\n");
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The traspose matrix of %d*%d is \n",m,n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}