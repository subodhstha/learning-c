/*find GCD of two input number by using recursive function*/
#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int n1, n2, r;
    printf("Enter any two number ");
    scanf("%d %d",&n1,&n2);
    r = gcd(n1,n2);
    printf("GCD of %d and %d is %d",n1, n2 ,r);
}
int gcd(int a, int b)
{
    int temp;
    if (b>a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    int rem;
    rem = a % b;
    if (rem == 0)
        return b;
    else
    return (gcd(b,rem));
}