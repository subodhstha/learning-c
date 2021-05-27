/*Write a program to decide whether a input number is less than 100 or not.*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number ");
	scanf("%d",&a);
	if(a>=100)
	{
	printf("The number  %d is greater than 100",a);		
	}
	else
	{
		printf("The number %d is less than 100",a);	
	}
}
