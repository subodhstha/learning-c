#include<stdio.h>
struct complex
{
    int real;
    int imag;
}c1, c2, c3;
int main()
{
    printf("Enter the value ");
    scanf("%d %d",&c1.real,&c1.imag);
    scanf("%d %d",&c2.real,&c2.imag);
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    printf("sum=%d+%di",c3.real,c3.imag);
}