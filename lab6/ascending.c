/*Write a program to sort the array elements in ascending order.*/
#include<stdio.h>
int main()
{
    int a[100], n, temp;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    printf("The element of array in ascending ordr is\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
}