/*Write a program to determine whether a given number is ‘odd’ or ‘even’ and print the message number is even or number is odd.*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number ");
    scanf("%d",&a);
    if (a%2 == 0)
    {
        printf("The number you enter is even");
    }
    else
    {
        printf("The number you enter is odd");
    }
      
    return 0;
}