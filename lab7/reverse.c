/*Write a function reverse( ) which receives number n as its arguments and returns reverse of n (e.g., if n=123 then reverse of n =321)*/
#include<stdio.h>
int reverse(int a);
int main()
{
    int n, rev;
    printf("Enter the number ");
    scanf("%d",&n);
    rev = reverse(n);
    printf("The reverse is %d",rev);
}
int reverse(int a)
{
    int r;
    while (a != 0)
    {
        r = r * 10;
        r = r + a%10;
        a = a / 10;
    }
    return r;
}