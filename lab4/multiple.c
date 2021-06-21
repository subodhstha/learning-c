/*Write a program to read two integer value m and n and decide and print whether m is a multiple of n.*/
#include<stdio.h>
int main()
{
    int m, n;
    printf("Enter the vale of m ");
    scanf("%d",&m);
    printf("Enter the value of n ");
    scanf("%d",&n);
    if (m%n == 0)
    {
        printf("m is a multiple of n");
    }
    else
        printf("m is not multiple of n");
}