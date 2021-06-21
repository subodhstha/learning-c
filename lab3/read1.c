/*Write a program to read the following data as it is and display on the screen by using scanf() and printf() function: “Ram” 120  ‘a’ 123.2.*/
#include<stdio.h>
int main()
{
    char name;
    char alpha;
    float fnum;
    int num;
    printf("Enter the name ");
    scanf("%s",name);
    printf("\nEnter the number ");
    scanf("%d",&num);
    printf("\nEnter the alphabet ");
    scanf("%c",&alpha);
    printf("\nEnter the float number ");
    scanf("%f",&fnum);
}