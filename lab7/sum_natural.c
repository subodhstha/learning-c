/*Write a function sumNatural( ) which receives number n as its arguments and returns sum of first  n natural numbers (e.g., if n=5 then sum of first natural number =1+2+3+4+5=15).*/
#include<stdio.h>
int sumNatural(int n);
int main()
{
    int n, sum;
    printf("Enter the terms of natural number ");
    scanf("%d",&n);
    sum = sumNatural(n);
    printf("The sum of natural number is %d",sum);
}

int sumNatural(int n)
{
    int sum;
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}