/*Write a program to add the distance in feet and inches  using  function and structure.*/
#include<stdio.h>
struct distance
{
    int feet;
    int in;
};

void display(struct distance d)
{
    printf("The total distance is %d feet and %d inches",d.feet,d.in);

}

int main()
{
    struct distance d[2];
    printf("Enter the distance\n");
    for (int i; i < 2; i++)
    {
        printf("Enter the distance in feet ");
        scanf("%d",&d[i].feet);
        printf("Enter the distance in inches ");
        scanf("%d",&d[i].in);
    }
    d[2].feet = d[0].feet + d[1].feet;
    d[2].in = d[0].in + d[1].in;
    if (d[2].in >= 12)
    {
        d[2].feet = d[2].feet + d[2].in/12;
        d[2].in = d[2].in%12;
    }
    display(d[2]);
}