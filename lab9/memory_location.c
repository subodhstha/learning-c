/*Write a program to display memory location reserved by a variable.*/
#include<stdio.h>
int main()
{
    int a = 10, b = 12, *p = &a, *q = &b;
    printf("value of a is %d and the its address is %u\n",a,&a);
    printf("value of a is %d and the its address is %u\n",*p,p);
    printf("value of b is %d and the its address is %u\n",*(&b),&b);
    printf("value of b is %d and the its address is %u\n",b,q);
}