/*Write a multifunctional program to sort the array elements in ascending order.*/
#include<stdio.h>
int ascending(int n[100], int a);
int main()
{
    int n, a[100];
    printf("Enter the size of arrey ");
    scanf("%d",&n);
    printf("Enter the elemant of array\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    ascending(a, n);
    printf("The elements in ascending order are \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d \n",a[i]);
    }
}
int ascending(int n[100], int a)
{
    int temp;
    for(int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; i++)
        {
            if (n[i] > n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    return n, a, temp;
}
