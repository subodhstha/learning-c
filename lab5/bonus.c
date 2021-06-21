/*The current year and the year in which the employee joined the organization are entered through the keyboard. If the number of years for which the employee has served the organization is greater than 3 then a bonus of Rs. 2500/- is given to the employee. If the years of service are not greater than 3, then the program should do nothing.*/
#include<stdio.h>
int main(){
    int current_year, join_year ,y;
    printf("Enter the year that employee join the organization ");
    scanf("%d",&join_year);
    printf("Enter the current year ");
    scanf("%d",&current_year);
    y = current_year - join_year;
    if (y>3)
    {
        printf("The Employee will get the bonus of Rs.2500");
    }
    return 0;
}