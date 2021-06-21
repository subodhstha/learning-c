#include<stdio.h>
int main()
{
    int a, b, max;
    printf("Enter any two number ");
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    printf("largest num %d",max);
}