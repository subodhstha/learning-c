/*Write a program to read the price of an item in decimal form (like 15.95 Rs) and print the output in Paisa (like 1595 Paisa).*/
#include<stdio.h>
int main()
{
	float r,p;
	printf("Enter the amount in rupees ");
	scanf("%f",&r);
	p=r*100;
	printf("The amount in paisa is %f Paisa",p);
}
