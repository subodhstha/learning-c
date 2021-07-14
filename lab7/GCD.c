/*Write a program with recursive function to find the GCD of two input numbers.*/
#include<stdio.h>
int gcd(int m, int n);
int main()
{
    int m, n, res;
    printf("Enter any two number ");
    scanf("%d %d",&m,&n);
    res = gcd(m,n);
    printf("GCD of %d and %d is %d",m,n,res);
}
int gcd(int m, int n)
{
    int rem;
    rem = m%n;
    if(rem == 0)
    {
        return n;
    }
    else
    {
        return(gcd(n,rem));
    }    
}