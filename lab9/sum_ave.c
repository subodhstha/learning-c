/*Write a program to find the sum and average of all the elements of an array using pointer.*/
#include<stdio.h>
int main()
{
    int n, a[n], sum=0, *p=&a[0];
    float ave;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the element of array\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",a+i);
        sum = sum + *(a+i);
    }
    ave = (float)sum / n;
    printf("The sum of the elements is %d\n",sum);
    printf("The average of sum is %.3f\n",ave);
}