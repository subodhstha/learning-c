/*Write a program to add two complex number using function and structure*/
#include<stdio.h>
struct complex
{
    int real;
    int imag;
};

void display(struct complex c)
{
    printf("Sum = %d + %di",c.real,c.imag);
}

int main()
{
    struct complex c[2];
    printf("Enter the value\n");
    for(int i=0;i<2;i++)
    {
        printf("Real number: ");
        scanf("%d",&c[i].real);
        printf("Imaginary number: ");
        scanf("%d",&c[i].imag);
    }
    c[2].real = c[0].real + c[1].real;
    c[2].imag = c[0].imag + c[1].imag;
    display(c[2]);
}