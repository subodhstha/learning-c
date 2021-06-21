/*Write a program to find the sum of square of first n natural numbers.*/
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number ");
    scanf("%d",&n);
    for (i = 1; n >= i;i++)
    {
        sum = sum + i*i;
    }
    printf("The sum of square of first %d natural number are %d",n ,sum);
    return 0;
}