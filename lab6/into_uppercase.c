/*Write a program to convert a lowercase string into uppercase by using strupr( ) fuction*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter the String ");
    gets(a);
    printf("In uppercase ");
    puts(strupr(a));
}