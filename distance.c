/*The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters. [Note: 1km=1000 meter, 1km= 3280.84 feet, 1 km= 39370.08 inches, and 1 km= 100000 centimeter]*/
#include<stdio.h>
int main()
{
	float k,m,f,in,cm;
	printf("Enter the distance between two cities in km ");
	scanf("%f",&k);
	m=k*1000;
	f=k*3280.84;
	in=k*39370.08;
	cm=k*100000;
	printf("\nThe distance between two cities in meter is %f m",m);
	printf("\nThe distance between two cities in feet is %f f",f);
	printf("\nThe distance between two cities in inches is %f in",in);
	printf("\nThe distance between two cities in centimeter is %f cm",cm);	
}
