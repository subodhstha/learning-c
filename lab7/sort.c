#include<stdio.h>
int sort(int a[100], int n);
int main()
{
    int a[100], n;
    printf("Enter the size of array \n");
    scanf("%d", &n);
    printf("Enter the element of array \n");
    for(int i=0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }

    sort(a,n);
    printf("Array in ascending order is\n");
    for(int i=0; i< n; i++)
    {
        printf("%d\n", a[i]);
    }
}

int sort(int a[100], int n)
{
    int temp;
    for(int i=0;i< n-1;i++)
    {
        for( int j=i+1;j< n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}