/*Ram’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>
int main()
{
	float b,d,h,g;
	printf("Enter tha basic salary ",b);
	scanf("%f",&b);
	d=b*40/100;
	h=b*20/100;
	g=b+d+h;
	printf("\nThe gross salary of the ram is %f",g);
}
