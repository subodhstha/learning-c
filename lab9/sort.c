/*Write a program to sort an array elements using pointer.*/
#include<stdio.h>
int main()
{
    int n, a[n], p, tmp;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d\n",a+i);
    }

    for(int i = 0; i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(*(a+i) > *(a+j))
            {
                tmp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tmp;
            }
        }
    }

    printf("The elements after sorting \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(a+i));
    }
}
