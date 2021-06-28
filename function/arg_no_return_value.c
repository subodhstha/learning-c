/*function with arguement and no return value*/
#include<stdio.h>
void addition(int a, int b);
int main()
{
    int x, y;
    printf("Enter any two number\n");
    scanf("%d %d",&x,&y);
    addition(x,y);
}
void addition(int c, int d)
{
    int sum;
    sum = c + d;
    printf("Sum of number is %d",sum);
}