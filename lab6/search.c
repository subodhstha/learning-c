/*Write a program to search a input number in a input array. And display the index position of number if found in the array.*/
#include<stdio.h>
int main()
{
    int a[100], n, ser;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter the element of array \n");
    for (int i = 0; i <n ; i++)
    {
        scanf("%D",&a[i]);
    }
    printf("Enter the element you want to search ");
    scanf("%d",&ser);
    for(int i = 0; i < n; i++)
    {
        if (a[i] == ser)
        {
            i = i +1;
            printf("The position of element is %d",i);
        }
        
    }
}