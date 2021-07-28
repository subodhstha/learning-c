/*program to illustratte the chain of pointer*/
#include<stdio.h>
int main()
{
    int x=5;
    int *p=&x;
    int **q=&p;
    int ***r=&q;
    printf("The value of x=%d\n",x);
    printf("The value of x=%d\n",*p);
    printf("The value of x=%d\n",**q);
    printf("The value of x=%d\n",***r);
}