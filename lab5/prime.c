/*Write a program to check whether a number entered by the user is prime or not.*/
#include <stdio.h> 
int main()
{
    int n, i, c = 0;
    printf("Enter any number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)  
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("%d is a Prime number",n);
    }
    else
    {
        printf("%d is not a Prime number",n);
    }
    return 0;    
}
