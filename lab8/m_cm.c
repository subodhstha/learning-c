/*Create a structure named distance which has members meter and centimeter. Write a program to read a distance from user and multiply the entered distance by 5 and then display the resultant distance.*/
#include<stdio.h>
struct distance
{
    int m;
    int cm;
};

void display(struct distance d)
{
    printf("The result distance after multiply by 5 is %d m and %d cm",d.m,d.cm);
}

int main()
{
    struct distance d[1];
    printf("Enter the distance\n");
    printf("Enter the distance in meter ");
    scanf("%d",&d[0].m);
    printf("Enter the distance in centimeter ");
    scanf("%d",&d[0].cm);
    d[1].m = d[0].m *5;
    d[1].cm = d[0].cm *5;
    if (d[1].cm >= 100)
    {
        d[1].m = d[1].m + d[1].cm/100;
        d[1].cm = d[1].cm%100;
    }
    display(d[1]);
}