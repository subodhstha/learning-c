/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.*/
#include<stdio.h>
int main()
{
    int r, s, a;
    printf("Enter age of Ram, Shyam, Ajay\n");
    scanf("%d %d %d",&r,&s,&a);
    if (r>s)
    {
        if (r>a)
        {
            printf("Ajay is the youngest");
        }
        else
        {
            printf("Shyam is the youngest");
        }
    }
    else
    {
        if (s>r)
        {
            printf("Ram is the youngest");
        }
        else
        {
            printf("Ajay is the youngest");
        }
    }
    return 0;
}