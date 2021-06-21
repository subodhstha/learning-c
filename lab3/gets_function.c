/*Write a program to read a line by using gets( ) function and then display the same line on the screen by using puts( ) function.*/
#include<stdio.h>
#include<conio.h>
int main()
{
 char name[20];
 printf("Enter your name ");
 gets(name);
 printf("Your name is ");
 puts(name);
 getch();
}