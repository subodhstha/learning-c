/*Write a program with recursive function to find the factorial of input number.*/
#include<stdio.h>
int factorial(int n);
int main()
{
    int n, f;
    printf("Enter the number ");
    scanf("%d",&n);
    f = factorial(n);
    printf("The factorial is %d",f);
}
int factorial(int n)
{
    if (n ==0)
    {
        return 1;
    }
    else
    {
        return(n*factorial(n-1));
    }
}