/*Write a program to find the sum of the series following series and display the result. 1+1/2+1/3 + …….1/n. Take the value of n from the user.*/
#include<stdio.h>
int main()
{
    int n;
    float i, sum = 0;
    printf("Enter the value of n to calculate value of 1+1/2+1/3 +........1/n ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        sum = sum + 1/i;
    }
    printf("The value of the sum is %f",sum);
}
