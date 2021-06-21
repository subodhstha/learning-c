/*Write a program to find the sum of digits of a number entered by the user.*/
#include<stdio.h>
int main(){
    int n,sum = 0, m;
    printf("Enter number ");
    scanf("%d",&n);
    while (n>0)
    {
        m = n%10;
        sum = sum + m;
    }
    printf("Sum of the digits are %d",sum);
    return 0;
}
