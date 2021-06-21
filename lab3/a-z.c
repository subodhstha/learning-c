/*Write a program to read a string with embedded white space and  containing only letters a-z. and output the same string on the screen. */
#include<stdio.h>
int main ()
{
    char x[20];
    printf("Enter the name ");
    scanf("%[a-z ]", &x);
    printf("\nThe name you enter is %s",x);
}