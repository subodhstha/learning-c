/*Write a program to find the sum of the square of the array elements.*/
#include<stdio.h>
int main()
{
    int a[10], sum = 0, n , sq;
    printf("Enter the size od the array ");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sq = a[i] * a[i];
        sum = sum + sq;
    }
    printf("The sum of the square of the element is %d",sum);
}