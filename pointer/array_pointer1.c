/*array and pointer*/
#include<stdio.h>
int main()
{
    int a[5]={5,3,4,9,1};
    int *p, sum;
    float ave;
    p=&a[0];
    for(int i=0; i < 5; i++)
    {
        sum = sum + *(p + i);
    }
    ave = (float)sum /5;
    printf("sum is %d\n",sum);
    printf("average is %f\n",ave);
}