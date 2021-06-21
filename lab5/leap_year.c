/*Write a program to checks whether an year (integer) entered by the user is a leap year or not (Note: A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400.).*/
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year ");
    scanf("%d",&year);
    if (year%400 == 0)
    {
        printf("The year is leap Year");
    }
    else if (year%100 ==0)
    {
        printf("The year isnot leap Year");
    }
    else if (year%4 ==0)
    {
        printf("The year is leap Year");
    }
    else
    {
        printf("The year isnot leap Year");
    }
    return 0;
}