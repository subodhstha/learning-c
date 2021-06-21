/*Write a c program that evaluate the expression: x=a-b/3+c*2-1 and display the result on the screen. Note take the value of variables from the user.*/
#include<stdio.h>
int main()
{
int a, b, c;
float x;
printf("Enter the value of a, b, c\n");
scanf("%d,\n",&a);
scanf("%d,\n",&b);
scanf("%d,\n",&c);
x = a - b / 3 + c * 2 - 1;
printf("The value of x is %f",x);
}