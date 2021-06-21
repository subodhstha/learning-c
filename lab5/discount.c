/*While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. If quantity and price per item are input through the keyboard, write a program to calculate the total expenses.*/
#include<stdio.h>
int main()
{
    int no_itm;
    float amount, cost, dis, dis_amount;
    printf("Enter the no of item ",no_itm);
    scanf("%d",&no_itm);
    printf("Enter the cost per item ");
    scanf("%f",&cost);
    amount = no_itm * cost;
    dis = (float)10/100 * amount;
    dis_amount = amount - dis;
    if (amount > 1000)
    {
        printf("The total expenses is %f",dis_amount);
    }
    else
    {
        printf("The total expenses is %f",amount);
    }
    return 0;
}