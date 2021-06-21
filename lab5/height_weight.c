/*Write a program that reads weight and height of boys in a class and then count the number of boys whose weight is less than 50 kg and height is greater than 170 cm.*/
#include<stdio.h>
int main()
{
    int n, he, we, count=0;
    printf("Enter the total number of student ");
    scanf("%d",&n);
    printf("Enter the height in cm and weight in kg ");
    for (int i = 1;i <= n; i++)
    {
        scanf("%d %d",&he,&we);
            if (he >170 && we < 50)
            {
                count++;
            }
    }
    printf("The student with weight less than 50kg and height greater than 170 cm are %d",count);

    return 0;
}