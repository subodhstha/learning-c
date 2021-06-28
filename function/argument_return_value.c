/*function with argument and return value*/
#include<stdio.h>
int addition(int a, int b);
int main()
{
    int x, y, sum;
    printf("Enter any two number\n");
    scanf("%d %d",&x,&y);
    sum = addition(x,y);
    printf("sum is %d",sum);
}
int addition(int p, int q)
{
    int sum;
    sum = p + q;
    return sum;
}