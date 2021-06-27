/*Write a program to find the  sum and average of the array elements.*/
#include<stdio.h>
int main(){
    int a[101], n , sum=0;
    float ave;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter tha elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    ave = (float)sum / n;
    printf("The sum of elements of array is %d\n",sum);
    printf("The average of element of arrey is %f",ave);
}