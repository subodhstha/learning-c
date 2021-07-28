/*Write a function prime( ) that returns 1 if its argument is a prime number and returns zero otherwise.*/
#include<stdio.h>
int prime(int n);
int main()
{
    int n, p;
    printf("Enter the number ");
    scanf("%d",&n);
    p = prime(n);
    printf("\t-----index-----\n1 = Prime number \t 0 = Not Prime Number \n\t -----answer-----\n Answer = %d",p);
}
int prime(int n)
{
    int r = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i==0 )
        {
            r++;
        }
    }
    if (r == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}