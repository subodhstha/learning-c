/*Write a program to generate a multiplication table of  a number entered by the user.*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number ");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        m = n * i;
        printf("%d * %d = %d\n",n,i,m);
    }    
    return 0;
}