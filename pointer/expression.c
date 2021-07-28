/*using pointer in expression*/
#include<stdio.h>
int main()
{
    int a=10, b=2, *p=&a, *q=&b, x, y;
    x=*p / *q;
    y = *p - *q;
    printf("Value of x = %d \nValue of y =%d\n",x,y);
    printf("Value of a=%d \nValue of b =%d\n",a,b);
    *p = *p +2;
    *q = *q+3;
    printf("Value of a=%d \nValue of b=%d",a,b);
}