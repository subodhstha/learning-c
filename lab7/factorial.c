/*Write a function factorial( ) which receives number n as its arguments and returns factorial of n (e.g., if n=5 then factorial of n =120).*/
#include<stdio.h>
int factorial(int n);
int main()
{
    int n, fac;
    printf("Enter the number ");
    scanf("%d",&n);
    fac = factorial(n);
    printf("The factorial is %d",fac);
}
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return(n*factorial(n-1));
    }
    
}