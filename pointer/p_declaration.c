/*program to illustrate the pointer declaration, initial and acess data*/
#include<stdio.h>
int main()
{
    int x=10;
    int *p=&x;
    printf("Value of x =%d and its address=%u\n",x,&x);
    printf("Value of x =%d and its address=%u\n",*p,p);
    printf("Value of x =%d and its address=%u\n",*(&x),&x);
    printf("Address of p =%u and value of p=%u\n",&p,*p);
}