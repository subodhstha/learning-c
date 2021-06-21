/*If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. */
#include<stdio.h>
int main()
{
    float cp, sp, loss, profit;
    printf("Enter the cost price ");
    scanf("%f",&cp);
    printf("Enter the selling price ");
    scanf("%f",&sp);
    loss = cp - sp;
    profit = sp - cp;
    if (cp>sp)
    {
        printf("The seller made loss of Rs.%f",loss);
    }
    else
    {
        printf("The seller made profit of Rs.%f",profit);
    }
    
    return 0;
}