/*Write a program to find the sum and average of first n natural numbers*/
#include<stdio.h>
int main(){
    int n,i,sum;
    float a;
    printf("Enter the natural number ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    a = (float)sum/n;
    printf("The sum of %d natural number are %d\n",n,sum);
    printf("The average of %d natural number are %f",n,a);
    return 0;
}