/*Write a program to read number of days from the user and convert them into months and days.*/
#include<stdio.h>
int main()
{
    int day, month, re_day;
    printf("Enter the days ");
    scanf("%d",&day);
    month = day / 30;
    re_day = day % 30;
    printf("The day you enter is %d montha %d days",month ,re_day);
}