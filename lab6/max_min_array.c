/*Write a program to read array and then find the maximum and minimum elements in a given array.*/
#include<stdio.h>
int main()
{
    int a[200], n, min, max;
    printf("Enter the size of arrey ");
    scanf("%d",&n);
    printf("Enter the element of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("The maximun element is %d\n",max);
    printf("The minimun element is %d",min);
   return 0;
}