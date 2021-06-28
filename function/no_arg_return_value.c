/*function with no argument and return value*/
#include<stdio.h>
int addition();
int main()
{
    int s;
    s = addition();
    printf("Sum of the number is %d",s);
}
int addition()
{
    int a, b, sum;
    printf("Enter any two number \n");
    scanf("%d %d",&a,&b);
    sum = a + b;
    return sum;
}