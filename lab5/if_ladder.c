/*Write a Program to read two numbers and an operator which performs the specified operation and display the result (note: use else..if ladder).*/
#include<stdio.h>
int main(){
    int a, b,d;
    char c;
    printf("Enter the operator '+, -, /'");
    scanf("%c",&c);
    printf("Enter any two number ");
    scanf("%d %d",&a,&b);
    if (c=='+')
    {
        d=a+b;
        printf("a + b = %d",d);
    }
    else if (c=='-')
    {
        d=a-b;
        printf("a - b = %d",d);
    }
    else if (c=='/')
    {
        d=(float)a/b;
        printf("a / b = %f",d);    
    }
    return 0;
}