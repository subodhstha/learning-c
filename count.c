/*Write a program to count and print the number of negative and positive numbers  in a given set of numbers. Test your program with a suitable set of numbers. Use scanf to read the numbers. Reading should be terminated when the value of 0 is encountered.*/
#include<stdio.h>
int main ()
{
	int i,num,p=0,n=0;
	printf("Enter the numbers\n");
	for(i=1;i<=100;i++)
	{
		scanf("%d",&num);
		if(num<0)
		{
			n++;
		}
		else if(num>0)
		{
			p++;
		}
		else
		{
			break;
		}
	}
	printf("Negative count are %d\n",n);
	printf("positive count are %d",p);
}
