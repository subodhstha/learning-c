/*Write a program to calculate the average of set of N input numbers*/
#include<stdio.h>
int main()
{
	float i, n, num=0, sum,average;
	printf("Enter the total number of element in set ");
	scanf("%f",&n);
	printf("Enter the numbers ");
	for(i=1; i<=n;i++)
	{
		scanf("%f",&num);
		sum = sum+num;
	}
	average = sum/2;
	printf("The average of the numbers is %f",average);
}
