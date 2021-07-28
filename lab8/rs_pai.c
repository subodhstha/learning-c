/*Create a structure named Currency which has rupees and paisa as members. Write a program to read a values of rupees and paisa from user and add them.*/
#include<stdio.h>
struct money
{
    int rupees;
    int paisa;
};

void display(struct money m)
{
    printf("The sum is %d rupees %d paisa",m.rupees,m.paisa);
}

int main()
{
    struct money m[2];
    for (int i=0; i < 2; i++)
    {
        printf("Enter the Rupees ");
        scanf("%d",&m[i].rupees);
        printf("Enter the Paisa ");
        scanf("%d",&m[i].paisa);
    }
    m[2].rupees = m[0].rupees + m[1].rupees;
    m[2].paisa = m[0].paisa + m[1].paisa;
    if(m[2].paisa >= 100)
    {
        m[2].rupees = m[2].rupees + m[2].paisa / 100;
        m[2].paisa = m[2].paisa % 100;
    }
    display(m[2]);
}