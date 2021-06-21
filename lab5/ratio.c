/*Write a program that reads four values a, b, c and d from the terminal and evaluates the ratio of (a+b) and (c-d) and prints the result, if (c-d) is not equal to zero, otherwise print the appropriate message on the screen.*/
#include<stdio.h>
int main()
{
    int a, b, c, d ,e ,f;
    float g;
    printf("Enter the value of a, b, c, d \n");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    e = a+b;
    f = c-d;
    g = (float)e/f;
    if (f != 0)
    {
        printf("The rato if (a+b) and (c-d) is %f",g);
    }
    else
    {
        printf("The ratio is invalid");
    }
    return 0;
}