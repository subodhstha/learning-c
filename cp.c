/*If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to find the cost price of one item.*/
#include<stdio.h>
int main()
{
	float sp,tp,tcp,cp;
	printf("Enter the total amount of 15 items ");
	scanf("%f",&sp);
	printf("Enter the total profit amount ");
	scanf("%f",&tp);
	tcp=sp-tp;
	cp=tcp/15;
	printf("The cost price of a item is %f",cp);
}
