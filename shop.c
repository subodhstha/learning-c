/*A cloth shop during festival seasons offers a discount of 10% on all purchases made in that shop. The total amount  after discount for a customer is given as Rs.1000.5. Write a program to calculate and display the discount, and  amount before discount.*/
#include<stdio.h>
int main()
{
	float ad,bd,d;
	printf("Enter the the amount after dicount ");
	scanf("%f",&ad);
	bd=ad*1.111;
	d=bd-ad;
	printf("The total amount before discount is %f\n",bd);
	printf("The total discount amount is %f",d);
}
