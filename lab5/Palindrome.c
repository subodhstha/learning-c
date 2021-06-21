/*Write a program to Check Whether a Number entered by the user is Palindrome or Not*/
#include<stdio.h>
int main(){
    int n, m, r=0;
    printf("Enter any number ");
    scanf("%d",&n);
    m = n;
    while (n != 0)
    {
        r = (r*10) + (n % 10);
        n /= 10;
    }
    if (r == m)
    {
        printf("The number %d is Palindrome",m);
    }
    else 
    {
        printf("The number %d isnot Palindrome",m);
    }
    return 0;
}