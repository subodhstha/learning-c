/*Write a program with recursive function to find the Fibonacci series of input number.*/
#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n, f=0;
    printf("Enter the value ");
    scanf("%d",&n);
    printf("Fibonacci series \n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n",fibonacci(f));
        f++;
    }
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    return (fibonacci(n-1) + fibonacci(n-2));
}
