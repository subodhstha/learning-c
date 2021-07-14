/*Write a function sumOfDigits( ) which receives number n as its arguments and returns sum of digits of n (e.g., n= 123 then sum of digits= 1+2+3=6).*/
#include<stdio.h>
int sum_of_digits(int a);
int main()
{
    int a, sum;
    printf("Enter the number ");
    scanf("%d",&a);
    sum = sum_of_digits(a);
    printf("The sum of the digits is %d",sum);
}
int sum_of_digits(int a)
{
    int sum = 0, m;
    while (a>0)
    {
        m = a % 10;
        sum = sum + m;
        a = a / 10;
    }
    return sum;
}