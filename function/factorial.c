/*factorial of inputnumber by using recursive function*/
#include<stdio.h>
int factorial(int n);
int main()
{
    int n, result;
    printf("Enter any number ");
    scanf("%d",&n);
    result = factorial(n);
    printf("factorial of %d is %d",n,result);
}
int factorial(int n)
{
    if (n==0)
        return 1;
    else
        return(n*factorial(n-1));
}