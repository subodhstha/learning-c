/*2d array and pointer*/
#include<stdio.h>
int main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int *p=&a[0][0],sum=0;
    float ave;
    for(int i =0; i<3;i++)
    {
        for(int j=0; j<4;j++)
        {
            sum = sum + *(p+4*i+j);
        }
    }
    ave = (float)sum/12;
    printf("sum = %d\n",sum);
    printf("average is %.3f\n",ave);
}