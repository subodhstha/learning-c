/*Write a program to calculate the power of the number  if the exponent is an integer by using pow() function*/
#include <stdio.h>
#include <math.h>
int main()
{
    double base, exp, result;
    printf("Enter a base number  ");
    scanf("%lf", &base);
    printf("Enter an exponent ");
    scanf("%lf", &exp);
    result = pow(base, exp);
    printf("%lf^%lf = %lf", base, exp, result);
    return 0;
}
