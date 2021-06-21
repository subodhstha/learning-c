/*Write a program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.*/
#include<stdio.h>
int main()
{
    int sum,coun=0;
    for (int i = 101; i < 200; i++)
    {
        if (i%7==0)
        {
            sum = sum + i;
            coun = coun + 1;
        }
    }        
printf("Number of integers 100 to 200 that divisilble by 7 are %d\n",coun);
printf("The sum of integers 100 to 200 that divisilble by 7 are %d",sum);
    return 0;
}