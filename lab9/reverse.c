/*Write a program using pointer to read n integers in an array and display its elements in reverse order.*/
#include<stdio.h>
int main()
{
    int n, a[n],*p;
    printf("Enter the size of arrey\n");
    scanf("%d",&n);
    p=&a[0];
    printf("Enter the number \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",a+i);
        p++;
    }
    p = &a[n-1];
    printf("The number in reverse are \n");
    for(int i = n; i > 0; i--)
    {
        printf("%d\n",*p);
        p--;
    }
}