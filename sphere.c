/*Write a program which reads radius of sphere from keyboard and calculates its volume and area [ hint: volume=4PIr3/3 and Area= 4PIr2].*/
#include<stdio.h>
int main()
{
	float PI=3.14,r,a,v;
	printf("Enter the radius of the sphere ");
	scanf("%f",&r);
	v=4*PI*r*r*r/3;
	a=4*PI*r*r;
	printf("The volume of the sphere is the %f",v);
	printf("\nThe area of the sphere is the %f",a);
}

