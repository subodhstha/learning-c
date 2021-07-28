#include<stdio.h>
int main()
{
    int a=20, b=10, *p=&a, *q=&b, sum, diff, div, mul;
    sum = *p +*q;
    diff = *p - *q;
    div = *p / *q;
    mul = *p * *q;
    printf("The sum is %d \ndifferent is %d \ndivision is %d \nmultiply is %d\n",sum,diff,div,mul);
}