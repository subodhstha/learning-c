/*Write a program to take a number from the user and then count the number of digits in that number.*/
#include<stdio.h>
int main(){
    int n , count=0;
    printf("Enter the number ");
    scanf("%d",&n);
    while (n !=0)
    {
        n=n/10;
        count++;
    }
    printf("The number of digits in input is %d",count);
    return 0;
}