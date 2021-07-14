/*Write a function calculateArea( ) which receives length and breadth of a rectangle as its arguments and returns area of the rectangle.*/
#include<stdio.h>
int calculateArea(int a, int b);
int main()
{
    int a, b, area;
    printf("Enter the length and breadth of a reactangle ");
    scanf("%d %d",&a, &b);
    area = calculateArea(a,b);
    printf("The area of reactangle is %d",area);
}
int calculateArea(int a, int b)
{
    int c;
    c = a*b;
    return c;
}