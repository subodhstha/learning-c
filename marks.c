/*If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.*/
#include<stdio.h>
int main()
{
	float m,s,e,n,c,p,a;
	printf("Enter the marks obatain by a the student ");
	scanf("%f %f %f %f %f",&m,&s,&e,&n,&c);
	a=m+s+e+n+c;
	p=100*a/500;
	printf("\nThe aggregate marks obtain by the student is %f",a);
	printf("\nThe percentage marks obtain by the student is %f",p);
}
