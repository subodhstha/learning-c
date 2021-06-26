/*Write a program to convert a uppercase string into lowercase by using strlwr( ) function.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter tha string in Capital letter ");
    gets(a);
    printf("In upper case ");
    puts(strlwr(a));

}