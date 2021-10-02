/*array and pointer*/
#include<stdio.h>
int main()
{
    int a[5]={5,3,4,9,1};
    int *p, sum;
    p=a;/*p=&a[0];*/
    for(int i=0;i<5;i++)
    {
        sum = sum + *p;/*sum = sum + (a + i);*/
        p++;
    }
    printf("sum is %d",sum);
}