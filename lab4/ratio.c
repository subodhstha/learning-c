/*Write a program to read two integer number ( number of male and female ) and finds the ratio between them to express as floating point value.*/
#include<stdio.h>
int main()
{
    int male, female;
    float ratio;
    printf("Enter the number of male ");
    scanf("%d",&male);
    printf("Enter the number of female ");
    scanf("%d",&female);
    ratio = (float)male/female;
    printf("The ratio of male to female is %f",ratio);
}