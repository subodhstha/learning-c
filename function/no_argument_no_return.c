/*function with no argument and no return value*/
#include<stdio.h>
void addition();
int main()
{
    addition();
}
void addition()
{
    int a, b, sum;
    printf("Enter any two number\n");
    scanf("%d %d",&a,&b);
    sum = a + b;
    printf("The sum is %d",sum);
}