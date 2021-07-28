/*Write a function that can be called to find the largest element of an m by n matrix.*/
#include<stdio.h>
int lar(int a[100][100]);
int main
{
    int a[100][100], n, l;
    printf("Enter the size ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    lar[i][j];
    printf("%d",lar[i][j]);
}

int lar(int a[100][100])
{
    int max, m, n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}