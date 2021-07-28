#include<stdio.h>
int main()
{
    float x=10;
    float *p=&x;
    char c[5]="ssss";
    char *d=&c[5];
    printf("Value of x =%f and its address is %u\n",*p,p);
    printf("Value of c =%s and its address is %u\n",*d,d);
}