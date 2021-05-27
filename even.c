/*Write a program that prints the even numbers from 1 to 100*/
#include<stdio.h>
int main()
{
	int a;
	printf("The even number betweeen 1 to 100 are ");
	for (a = 1;a<=100;a++)
	{
		if(a%2==0)
		{
			printf("%d ",a);
		}	
	}
}
