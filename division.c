/*Write a program that requests two float type numbers from the user and then divides the first number by the second and display the result along with the numbers.*/
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the first number ");
	scanf("%f",&a);
	printf("Enter the second number ");
	scanf("%f",&b);
	c=a/b;
	printf("The division of first number by second number is %f",c);
	
}
