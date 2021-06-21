/*Write a program to read different characters by using getchar(), getch(), and getche() functions and then output the characters on the screen by using putchar() and putch() functions.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char data, data2, data3;
    printf("Enter the first character ");
    data=getchar();
    printf("\nEnter the second character ");
    data2=getch();
    printf("\nEnter the third character ");
    data3=getche();
    printf("\nThe first character is ");
    putchar(data);
    printf("\nThe second character is ");
    putch(data2);
    printf("\nThe third character is ");
    putchar(data3);
    getch();
}